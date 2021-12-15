// Coded by Mr MJT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    printf(" ☢ Enter the text:\n");
    printf("\n");
    system("bash enter");
    char str[100];
    read(0, str, sizeof(str));
    printf("\n");
    for(int i = 0; i < 100 && str[i] != '\0'; i++)
    {
        str[i] = str[i] -4;
    }
    printf(" ☢ Decrypted text: %s\n", str);
}
