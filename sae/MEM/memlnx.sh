src='
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i < 9999999)
    {
        char *m = (char *)malloc(100);
    }
}'

touch hello.c
echo "$src" > hello.c
gcc hello.c -o hello
./hello


