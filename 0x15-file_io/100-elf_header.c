#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
* error_msg - print an error message to standard error
* @exit_code: the exit code to use
* @format: the format string
*/
void error_msg(int exit_code, const char *format, ...) {
va_list args;
va_start(args, format);
dprintf(2, format, args);
va_end(args);
exit(exit_code);
}

/**
* print_elf_header - print information from the ELF header
* @header: pointer to the ELF header
*/
void print_elf_header(Elf64_Ehdr *header) {
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) {
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %s (Executable file)\n", header->e_type == ET_EXEC ? "EXEC" : "unknown");
printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
if (argc != 2)
error_msg(98, "Usage: elf_header elf_filename\n");

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_msg(98, "Error: Can't open file %s\n", argv[1]);

Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
error_msg(98, "Error: Can't read from file %s\n", argv[1]);

if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
error_msg(98, "Error: Not an ELF file: %s\n", argv[1]);

print_elf_header(&header);
close(fd);

return 0;
}
