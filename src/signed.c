/* file: signed.c
 * Table renderer by Braden Best
 *   Renders a table of numbers
 *   Github flavored markdown style
 */

#include "signed.h"

signed int get_signed(long int n, int num_bits)
{
  int sign_bit = n >> (num_bits - 1) & 1;
  sign_bit <<= (num_bits - 1);
  int raw = n ^ sign_bit;
  return 0 - (sign_bit - raw);
}
