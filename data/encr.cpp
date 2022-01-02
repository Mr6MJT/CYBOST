#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    printf(" ☢ Enter the text: \n");
    printf("\n");
    system("bash enter");
    char str[100];
    read(0, str, 100);
    printf("\n");
    for(int i = 0; i < 100 && str[i] != '\0'; i++)
    {
	str[i] = str[i] +3;
    }
    printf(" ☢ Encrypted text: %s\n", str);
}
