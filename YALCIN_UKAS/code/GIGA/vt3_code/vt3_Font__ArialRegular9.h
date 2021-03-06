/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_FONT__ARIALREGULAR9_H
#define INCLUDE__VT3_FONT__ARIALREGULAR9_H

/* header file for raster font */
/* font:                   Arial Regular 9 */
/* code generator format:  2 */
/* screen colour model is: palette 256 colours 16 bits */

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_FONTS
#pragma DATA_SEG DSEG BANKED_RAM

/* the font descriptor */
#define vt3_font_ArialRegular9 (&vt3_font_descriptor_ArialRegular9)
extern const vt3_font FAR vt3_font_descriptor_ArialRegular9;

/* the character mapping */
/*    pos    ord   encoding            used?    size */
/*      0   0020   " "                          (3 x 10) */
/*      1   0021   "!"                          (3 x 10) */
/*      2   0022   "\""                         (3 x 10) */
/*      3   0023   "#"                          (5 x 10) */
/*      4   0024   "$"                          (5 x 10) */
/*      5   0025   "%"                          (8 x 10) */
/*      6   0026   "&"                          (6 x 10) */
/*      7   0027   "'"                          (2 x 10) */
/*      8   0028   "("                          (3 x 10) */
/*      9   0029   ")"                          (3 x 10) */
/*     10   002A   "*"                          (4 x 10) */
/*     11   002B   "+"                    X     (5 x 10) */
/*     12   002C   ","                          (3 x 10) */
/*     13   002D   "-"                    X     (3 x 10) */
/*     14   002E   "."                    X     (3 x 10) */
/*     15   002F   "/"                          (3 x 10) */
/*     16   0030   "0"                    X     (5 x 10) */
/*     17   0031   "1"                    X     (5 x 10) */
/*     18   0032   "2"                    X     (5 x 10) */
/*     19   0033   "3"                    X     (5 x 10) */
/*     20   0034   "4"                    X     (5 x 10) */
/*     21   0035   "5"                    X     (5 x 10) */
/*     22   0036   "6"                    X     (5 x 10) */
/*     23   0037   "7"                    X     (5 x 10) */
/*     24   0038   "8"                    X     (5 x 10) */
/*     25   0039   "9"                    X     (5 x 10) */
/*     26   003A   ":"                          (3 x 10) */
/*     27   003B   ";"                          (3 x 10) */
/*     28   003C   "<"                          (5 x 10) */
/*     29   003D   "="                          (5 x 10) */
/*     30   003E   ">"                          (5 x 10) */
/*     31   003F   "?"                          (5 x 10) */
/*     32   0040   "@"                          (9 x 10) */
/*     33   0041   "A"                          (6 x 10) */
/*     34   0042   "B"                          (6 x 10) */
/*     35   0043   "C"                          (7 x 10) */
/*     36   0044   "D"                          (7 x 10) */
/*     37   0045   "E"                    X     (6 x 10) */
/*     38   0046   "F"                          (6 x 10) */
/*     39   0047   "G"                          (7 x 10) */
/*     40   0048   "H"                          (7 x 10) */
/*     41   0049   "I"                          (3 x 10) */
/*     42   004A   "J"                          (5 x 10) */
/*     43   004B   "K"                          (6 x 10) */
/*     44   004C   "L"                          (5 x 10) */
/*     45   004D   "M"                          (7 x 10) */
/*     46   004E   "N"                          (7 x 10) */
/*     47   004F   "O"                          (7 x 10) */
/*     48   0050   "P"                          (6 x 10) */
/*     49   0051   "Q"                          (7 x 10) */
/*     50   0052   "R"                          (7 x 10) */
/*     51   0053   "S"                          (6 x 10) */
/*     52   0054   "T"                          (5 x 10) */
/*     53   0055   "U"                          (7 x 10) */
/*     54   0056   "V"                          (6 x 10) */
/*     55   0057   "W"                          (9 x 10) */
/*     56   0058   "X"                          (5 x 10) */
/*     57   0059   "Y"                          (7 x 10) */
/*     58   005A   "Z"                          (6 x 10) */
/*     59   005B   "["                          (3 x 10) */
/*     60   005C   "\\"                         (3 x 10) */
/*     61   005D   "]"                          (3 x 10) */
/*     62   005E   "^"                          (3 x 10) */
/*     63   005F   "_"                          (5 x 10) */
/*     64   0060   "`"                          (3 x 10) */
/*     65   0061   "a"                          (5 x 10) */
/*     66   0062   "b"                          (5 x 10) */
/*     67   0063   "c"                          (5 x 10) */
/*     68   0064   "d"                          (5 x 10) */
/*     69   0065   "e"                          (5 x 10) */
/*     70   0066   "f"                          (4 x 10) */
/*     71   0067   "g"                          (5 x 10) */
/*     72   0068   "h"                          (5 x 10) */
/*     73   0069   "i"                          (2 x 10) */
/*     74   006A   "j"                          (2 x 10) */
/*     75   006B   "k"                          (5 x 10) */
/*     76   006C   "l"                          (2 x 10) */
/*     77   006D   "m"                          (8 x 10) */
/*     78   006E   "n"                          (5 x 10) */
/*     79   006F   "o"                          (5 x 10) */
/*     80   0070   "p"                          (5 x 10) */
/*     81   0071   "q"                          (5 x 10) */
/*     82   0072   "r"                          (3 x 10) */
/*     83   0073   "s"                          (5 x 10) */
/*     84   0074   "t"                          (3 x 10) */
/*     85   0075   "u"                          (5 x 10) */
/*     86   0076   "v"                          (6 x 10) */
/*     87   0077   "w"                          (6 x 10) */
/*     88   0078   "x"                          (5 x 10) */
/*     89   0079   "y"                          (6 x 10) */
/*     90   007A   "z"                          (4 x 10) */
/*     91   007B   "{"                          (3 x 10) */
/*     92   007C   "|"                          (3 x 10) */
/*     93   007D   "}"                          (3 x 10) */
/*     94   007E   "~"                          (5 x 10) */
/*     95   007F   ""                          (warning: character does not exist) */
/*     96   00C7   "\302\200"                   (7 x 10) */
/*     97   00D6   "\302\201"                   (7 x 10) */
/*     98   00DC   "\302\202"                   (7 x 10) */
/*     99   00E7   "\302\203"                   (5 x 10) */
/*    100   00F6   "\302\204"                   (5 x 10) */
/*    101   011E   "\302\205"                   (7 x 10) */
/*    102   0130   "\302\206"                   (3 x 10) */
/*    103   0131   "\302\207"                   (2 x 10) */
/*    104   015E   "\302\210"                   (6 x 10) */
/*    105   0069   3                            (3 x 10) */
/*    106   006A   16                           (3 x 10) */
/*    107   006B   18                           (3 x 10) */
/*    108   006C   20                           (5 x 10) */
/*    109   006D   21                           (5 x 10) */
/*    110   006E   36                           (6 x 10) */
/*    111   006F   37                           (6 x 10) */
/*    112   0070   38                           (7 x 10) */
/*    113   0071   40                           (6 x 10) */
/*    114   0072   48                           (7 x 10) */
/*    115   0073   54                           (6 x 10) */
/*    116   0074   55                           (5 x 10) */
/*    117   0075   751                          (4 x 10) */
/*    118   0076   899                          (2 x 10) */
/*    119   0077   900                          (2 x 10) */
/*    120   0078   903                          (2 x 10) */
/*    121   0079   909                          (2 x 10) */
/*    122   007A   910                          (2 x 10) */
/*    123   007B   911                          (6 x 10) */
/*    124   007C   913                          (2 x 10) */
/*    125   007D   914                          (2 x 10) */
/*    126   007E   915                          (3 x 10) */
/*    127   007F   916                          (3 x 10) */
/*    128   0080   917                          (6 x 10) */
/*    129   0081   919                          (2 x 10) */
/*    130   0082   920                          (2 x 10) */
/*    131   0083   926                          (5 x 10) */
/*    132   0084   928                          (5 x 10) */
/*    133   0085   930                          (5 x 10) */
/*    134   0086   931                          (5 x 10) */
/*    135   0087   932                          (5 x 10) */
/*    136   0088   934                          (5 x 10) */
/*    137   0089   935                          (5 x 10) */
/*    138   008A   936                          (5 x 10) */
/*    139   008B   937                          (3 x 10) */
/*    140   008C   938                          (3 x 10) */
/*    141   008D   939                          (3 x 10) */
/*    142   008E   941                          (4 x 10) */
/*    143   008F   942                          (4 x 10) */
/*    144   0090   943                          (4 x 10) */
/*    145   0091   947                          (5 x 10) */
/*    146   0092   948                          (5 x 10) */
/*    147   0093   951                          (5 x 10) */
/*    148   0094   952                          (5 x 10) */
/*    149   0095   955                          (8 x 10) */
/*    150   0096   958                          (10 x 10) */
/*    151   0097   959                          (8 x 10) */
/*    152   0098   960                          (8 x 10) */
/*    153   0099   962                          (5 x 10) */
/*    154   009A   964                          (5 x 10) */
/*    155   009B   966                          (5 x 10) */
/*    156   009C   968                          (5 x 10) */
/*    157   009D   969                          (5 x 10) */
/*    158   009E   971                          (5 x 10) */
/*    159   009F   972                          (4 x 10) */
/*    160   00A0   975                          (5 x 10) */
/*    161   00A1   976                          (4 x 10) */
/*    162   00A2   977                          (7 x 10) */
/*    163   00A3   979                          (2 x 10) */
/*    164   00A4   980                          (2 x 10) */
/*    165   00A5   982                          (5 x 10) */
/*    166   00A6   984                          (2 x 10) */
/*    167   00A7   985                          (5 x 10) */
/*    168   00A8   987                          (4 x 10) */
/*    169   00A9   988                          (4 x 10) */
/*    170   00AA   990                          (5 x 10) */
/*    171   00AB   991                          (2 x 10) */
/*    172   00AC   992                          (2 x 10) */
/*    173   00AD   993                          (3 x 10) */
/*    174   00AE   995                          (4 x 10) */
/*    175   00AF   996                          (4 x 10) */
/*    176   00B0   997                          (5 x 10) */
/*    177   00B1   998                          (5 x 10) */
/*    178   00B2   999                          (2 x 10) */
/*    179   00B3   1000                         (2 x 10) */
/*    180   00B4   1005                         (4 x 10) */
/*    181   00B5   1006                         (4 x 10) */
/*    182   00B6   1007                         (6 x 10) */
/*    183   00B7   1010                         (5 x 10) */
/*    184   00B8   1011                         (2 x 10) */
/*    185   00B9   1012                         (2 x 10) */
/*    186   00BA   1019                         (5 x 10) */
/*    187   00BB   1020                         (5 x 10) */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_FONT__ARIALREGULAR9_H */

/* end of file */
