#include "signed.h"

static signed int twos(long n, int width);

signed int
get_signed(long n, int num_bits)
{/*{{{*/
    long sign = n & (1 << (num_bits - 1));

    return sign
        ? twos(n, num_bits)
        : n;
}/*}}}*/

static signed int
twos(long n, int width)
{/*{{{*/
    long max_int = (1 << width) - 1;
    
    return -((~n + 1) & max_int);
}/*}}}*/
