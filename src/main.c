/* file: main.c
 * Table renderer by Braden Best
 *   Renders a table of numbers
 *   Github flavored markdown style
 */

#include <stdio.h>
#include <stdlib.h>

#include "binary.h"
#include "signed.h"

int main(int argc, char **argv)
{
  unsigned int i, num_bits = 4;
  int md = 0;
  if(argc > 1)
    num_bits = atoi(argv[1]);
  if(argc > 2)
    if(argv[2][0] == 'm' && argv[2][1] == 'd')
      md = 1;

  printf("Table for a/an %u-bit integer: \n\n", num_bits);

  if(md){
    printf("| Unsigned | Signed | Hex | Binary | Sign Bit |\n");
    printf("|:--------:|:------:|:---:|:------:|:--------:|\n");
    for (i = 0; i < (1<<num_bits); i++)
      printf("| %u | %i | %X | %s | %u |\n", i, get_signed(i, num_bits), i, get_bin(i, num_bits), get_sign_bit(i, num_bits));
    printf("\n| Unsigned | Signed | Hex | Binary | Sign Bit |\n");
    printf("|:--------:|:------:|:---:|:------:|:--------:|\n");
  }else{
    printf("unsigned\tsigned\t\thex\t\tbinary\t\tsign bit\n");
    printf("--------\t------\t\t---\t\t------\t\t--------\n");
    for (i = 0; i < (1<<num_bits); i++)
      printf("%u\t\t%i\t\t%X\t\t%s\t\t%u\n", i, get_signed(i, num_bits), i, get_bin(i, num_bits), get_sign_bit(i, num_bits));
    printf("--------\t------\t\t---\t\t------\t\t--------\n");
    printf("unsigned\tsigned\t\thex\t\tbinary\t\tsign bit\n");
  }
  return 0;
}
