#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "args.h"

static void usage(char *pname);

void
parse_args(char **argv, struct options *o)
{/*{{{*/
    char *arg;
    char **args = argv + 1;

    while(arg = *(args++)){
        if(!strncmp(arg, "-nb", 3))
            o->num_bits = atol(*args);

        if(!strncmp(arg, "-md", 3))
            o->markdown = 1;

        if(!strncmp(arg, "-h", 2))
            usage(*argv);
    }
}/*}}}*/

static void
usage(char *pname)
{/*{{{*/
    printf( "Usage: %s [options]\n"
            "Options:\n"
            "    -nb [number]  change the number of bits to account for. Default = 4\n"
            "    -md           use markdown format\n"
            "    -h            display this help\n",
            pname);
    exit(1);
}/*}}}*/
