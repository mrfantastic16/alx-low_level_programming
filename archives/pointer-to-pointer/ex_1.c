#include <stdio.h>

int main()
{
        int a = 100;

        int *ptr = &a;

        int **dptr = &ptr;

        printf("%ls\n", *dptr);
        return (0);
}
