#include <string.h>

#include "binary.h"

static void revcpy(char *dest, char *src);

void
to_binary(char *buf, long n, int padding)
{/*{{{*/
    char bbuf[65] = "",
         *bbufp = bbuf;

    while(n || strlen(bbuf) < padding){
        *(bbufp++) = (n % 2) + '0';
        n /= 2;
    }

    revcpy(buf, bbuf);
}/*}}}*/

static void
revcpy(char *dest, char *src)
{/*{{{*/
    char *srcp = src;

    while(*(srcp + 1))
        srcp++;

    while(srcp - src >= 0)
        *(dest++) = *(srcp--);
}/*}}}*/
