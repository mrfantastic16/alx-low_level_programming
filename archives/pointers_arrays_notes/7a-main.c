#include <stdio.h>

/**
 * modif_my_char_var - solve me
 * 
 * Return: nothing
*/

void modif_my_char_var(char *cc, char ccc)
{
    *cc = 'o';
    ccc = 'l';
}

/**
 * main - solve me
 * 
 * Return: Always 0
*/

int main(void)
{
    char c;
    char *p;

    p = &c;
    c = 'H';

    modif_my_char_var(p, c);

    putchar(c);
    putchar('\n');
    putchar(*p);
    putchar('\n');

    return (0);
}