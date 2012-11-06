#include <stdio.h>

/* Write.c
 *
 * Creates a bootable image file that integrates the assembly boot loader.
 */
int main()
{
  FILE *boot_loader;
  FILE *boot_file;
  char boot_buffer[512];

  boot_loader = fopen("./boot.bin", "r");

  if (boot_loader == NULL) {
    fputs("File load error", stderr);
    return -1;
  }

  // Read the boot loader code into the buffer.
  // (carefully observe how we only take 510 bytes)
  fgets(boot_buffer, 510, boot_loader);
  fclose(boot_loader);

  // This makes the BIOS recognize the boot sector.
  boot_buffer[510] = 0x55;
  boot_buffer[511] = 0xaa;

  // Write everything to a bootable image file.
  boot_file = fopen("./boot.img", "w+");
  fseek(boot_file, 0, SEEK_SET);
  fwrite(boot_buffer, 512, 1, boot_file);
  fclose(boot_file);

  return 0;
}
