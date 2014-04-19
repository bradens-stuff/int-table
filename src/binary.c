/* file: binary.c
 * Table renderer by Braden Best
 *   Renders a table of numbers
 *   Github flavored markdown style
 */

#include <stdlib.h>

#include "binary.h"

char *get_bin(long int n, int num_bits)
{
  char *ret = calloc(sizeof(char),num_bits+1);
  int i, t_ptr = 0;
  for (i = num_bits-1; i >= 0; i--){
    ret[t_ptr++] = (n>>i & 1) + '0';
  }
  ret[t_ptr] = 0;
  return ret;
}

int get_sign_bit(long int n, int num_bits)
{
  return n >> (num_bits-1);
}
