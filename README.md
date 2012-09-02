# Description

Crash OS is a small experimental **operating system** that is supposed to grow
over the next few months. It will hopefully stick to the POSIX standard in the
end and largely be based on Tanenbaums **Operating Systems: Design And
Implementation**.

## Current state

Currently there is a bootloader existing that displays a small message.
I wrote a C program that creates a bootable image file as well (the same could
have been achieved by using the 'dd' command but I wanted to learn more C
anyway).

## How to install

### Prequisites

* You will need a *nix system with NASM and GCC
* VirtualBox or a real floppy disk (*hrhr*) for testing

### Install steps

1. Download the code.
2. Execute 'make clean' and  'make' in the code folder (yeah, I committed the
executable files as well, this was no accident).
3. Run './write' to create a bootable image file.
4. Get VirtualBox.
5. Create a new virtual machine (hard drive doesn't matter).
6. Go to **Settings > Storage** and add a **Floppy Controller**.
7. Add the **boot.img** as a disk.
8. Sart the VM and enjoy the small OS.