// Coded by Mr MJT
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" ☢ Enter the 1st value: \n");
    system("bash enter");
    int x;
    scanf("%d", &x);
    printf("\n");
    printf(" ☢ Enter the 2nd value: \n");
    system("bash enter");
    int y;
    scanf("%d", &y);
    printf("\n");
    int a = x + y;
    int b = x / y;
    int s = x * y;
    int r = x - y;
    printf(" ☢ %d + %d = %d\n", x, y, a);
    printf(" ☢ %d - %d = %d\n", x, y, r);
    printf(" ☢ %d x %d = %d\n", x, y, s);
    printf(" ☢ %d / %d = %d\n", x, y, b);
}
