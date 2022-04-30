#ifndef _MAIN_
#define _MAIN_

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
[main a197237] main.h to bit_manipulation
 2 files changed, 16 insertions(+)
 create mode 100644 0x14-bit_manipulation/main.h
