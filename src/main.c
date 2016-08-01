#include <stdio.h>
#include <string.h>

#include "binary.h"
#include "signed.h"
#include "args.h"

static void print_header(int markdown);
static void render_table(struct options *o);

const char *formats[] = {
    "unsigned\tsigned\t\thex\t\tbinary\t\tsign bit\n",
    "| Unsigned | Signed | Hex | Binary | Sign Bit |\n",
    "--------\t------\t\t---\t\t------\t\t--------\n",
    "|:--------:|:------:|:---:|:------:|:--------:|\n",
    "%u\t\t%i\t\t%X\t\t%s\t\t%c\n",
    "| %u | %i | %X | %s | %c |\n"

};

static void
print_header(int markdown)
{/*{{{*/
    printf(formats[0 + markdown]);
    printf(formats[2 + markdown]);
}/*}}}*/

static void
render_table(struct options *o)
{/*{{{*/
    char bin_buf[65] = "";
    long i;

    printf("Table for a/an %u-bit integer: \n\n", o->num_bits);
    print_header(o->markdown);

    for(i = 0; i < (1 << o->num_bits); i++){
        memset(bin_buf, 0, 65);
        to_binary(bin_buf, i, o->num_bits);
        printf(formats[4 + o->markdown], i, get_signed(i, o->num_bits), i, bin_buf, *bin_buf);
    }

    printf("\n");
    print_header(o->markdown);
}/*}}}*/

int
main(int argc, char **argv)
{/*{{{*/
    struct options o = {4, 0};

    parse_args(argv, &o);
    render_table(&o);

    return 0;
}/*}}}*/
