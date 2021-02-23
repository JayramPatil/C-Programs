#include<stdio.h>
#include<stdlib.h>
#define MAXROW 3
#define MAXCOL 4

int main()
{
    int (*p)[MAXCOL];
    p = (int (*) [MAXCOL])malloc(MAXROW *sizeof(*p));
    return 0;
}
