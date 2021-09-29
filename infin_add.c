/*
** INFINI ADDITION
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my.h"
#include "other.c"
#include <stdlib.h>

void infini_add(char *a, char *b)
{
    int tmp = 0;
    int i = 0;
    char *result = malloc(sizeof(char) * (my_strlen(a) + 1));

    while (a[i]) {
        int int_a = my_getnbrchar(a[i]);
        int int_b = my_getnbrchar(b[i]);
        if((int_a + int_b + tmp) <= 9) {
            result[i] = (int_a + int_b + tmp) +'0';
            tmp = 0;
        } else {
            result[i] = (int_a + int_b + tmp) % 10 +'0';
            tmp = (int_a + int_b + tmp) / 10;
        }
        i = i + 1;
    }
    if (tmp >= 1)
        result[i]= tmp + '0';
    my_putstr(my_revstr(result));
    free(result);
}

void ajust_char(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    char *chr1 = malloc((len1 + len2) + 1);
    char *chr2 = malloc((len1 + len2) + 1);
    
    if (len1 == len2)
        infini_add(str1, str2);
    if (len1 > len2) {
        adds1ss2(str1, str2, len1, chr2);
    } else if (len2 > len1) {
        adds2ss1(str1, str2, len2, chr1);
    }
    free(chr1);
    free(chr2);
}

int main(int argc, char **argv)
{
    if(argc < 3) {
        my_putstr("Usage : ./infin_add <nb1> <nb2>");
        return (0);
    }
    if (argv[1][0] == '-' && argv[2][0] == '-') {
        my_putchar('-');
        ajust_char(my_revstr(my_getonlynbr(argv[1])), my_revstr(my_getonlynbr(argv[2])));
        return (0);
    }
    ajust_char(my_revstr(my_getonlynbr(argv[1])), my_revstr(my_getonlynbr(argv[2])));
    return (0);
}

