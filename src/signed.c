#include "signed.h"

signed int
get_signed(long n, int num_bits)
{/*{{{*/
    long sign = n & (1 << (num_bits - 1));

    return sign
        ? n - (1 << num_bits)
        : n;
}/*}}}*/
