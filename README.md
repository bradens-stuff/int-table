# int-table

This renders tables like this:

| Unsigned | Signed | Hex | Binary | Sign Bit |
|:--------:|:------:|:---:|:------:|:--------:|
| 0 | 0 | 0 | 0000 | 0 |
| 1 | 1 | 1 | 0001 | 0 |
| 2 | 2 | 2 | 0010 | 0 |
| 3 | 3 | 3 | 0011 | 0 |
| 4 | 4 | 4 | 0100 | 0 |
| 5 | 5 | 5 | 0101 | 0 |
| 6 | 6 | 6 | 0110 | 0 |
| 7 | 7 | 7 | 0111 | 0 |
| 8 | -8 | 8 | 1000 | 1 |
| 9 | -7 | 9 | 1001 | 1 |
| 10 | -6 | A | 1010 | 1 |
| 11 | -5 | B | 1011 | 1 |
| 12 | -4 | C | 1100 | 1 |
| 13 | -3 | D | 1101 | 1 |
| 14 | -2 | E | 1110 | 1 |
| 15 | -1 | F | 1111 | 1 |

| Unsigned | Signed | Hex | Binary | Sign Bit |
|:--------:|:------:|:---:|:------:|:--------:|

for comparisons between different representations of a given n-bit number

## Usage

    $ int-table [width] [use markdown]

### width

Possible values: 0..31

width is the width of the integer. For instance, the table above is `width = 4`, so all the possible 4-bit integers are printed

### use markdown

Possible values: md

If md is specified, a markdown table is generated. The most practical use of this is to put it in a .md file

You can put this in a file like so:

    $ int-table [width] md >> [file].md

Example:

```bash
$ int-table 4 md >> README.md
```

Which is the command I used to render the above table  
