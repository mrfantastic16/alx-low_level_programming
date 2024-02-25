#include <stdio.h>

/**
 * main - pointers arithmetic
 * 
 * Return: Always 0
*/

int main(void)
{
    int *p;
    int a[2];
    int n;

    p = &n;

    printf("*p = &n; \np: %p\n", p);
    printf("p + 1: %p\n", p + 1);

    return (0);
}