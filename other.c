/*
** EPITECH PROJECT, 2020
** INFINI SUB - SUB
** File description:
** NO DESCRIPTION
*/

#include "./include/my.h"
#include <stdlib.h>

void infini_add(char *a, char *b);

void adds1ss2(char *s1, char *s2, int l1, char *r)
{
	int i = 0;

    while (i != l1) {
        if (s2[i] != '\0') {
			r[i] = s2[i];
        } else {
        	r[i] = 0 + '0';
    	}
    i = i + 1;
    }
    infini_add(s1, r);
}

void adds2ss1(char *s1, char *s2, int l2, char *r)
{
	int i = 0;

    while (i != l2) {
		if (s1[i] != '\0') {
            r[i] = s1[i];
		} else {
        	r[i] = 0 + '0';
		}
	i = i + 1;
    }
	infini_add(r, s2);
}

