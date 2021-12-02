#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf(" ☢ Hello \n");
    char a[20];
    scanf("%s", a);
    system("sleep 0.7");
    printf("\n ☢ How are you? \n");
    char b[10];
    scanf("%s", b);
    system("sleep 0.7");
    printf("\n ☢ Good,What is your name?\n");
    char c[10];
    scanf("%s", c);
    system("sleep 0.7");

    printf("\n ☢ %s,Nice Name!!\n", c);
    char d[10];
    scanf("%s", d);
    system("sleep 0.7");

    printf("\n ☢ Where are you from?\n");
    char e[17];
    scanf("%s", e);
    system("sleep 0.7");

    printf("\n ☢ I love %s it's amazing country\n", e);
    char f[10];
    scanf("%s", f);
    system("sleep 0.7");

    printf("\n ☢ Do you speak arabic?\n");
    char g[10];
    scanf("%s", g);
    system("sleep 0.7");

    printf("\n السلام عليكم ☢ \n");
    char h[10];
    scanf("%s", h);
    system("sleep 0.7");

    printf("\n ☢ Are you programmer? \n");
    char l[10];
    scanf("%s", l);
    system("sleep 0.7");

    printf("\n ☢ Which linux distro do you prever?\n");
    char df[10];
    scanf("%s", df);
    system("sleep 0.7");

    printf ("\n ☢ I am using parrot os in these days\n");
    char sad[10];
    scanf("%s", sad);
    system("sleep 0.7");

    printf("\n ☢ do you want me to say joke?\n");
    char dsh[10];
    scanf("%s", dsh);
    if (strcmp(dsh, "yes") == 0)
    {
	system("sleep 0.7");

	printf ("\n ☢ joke :)\n");
        system("sleep 0.5");
	printf ("\n ☢ do you want me to say another joke?\n");
	char sss[10];
	scanf("%s", sss);
	if (strcmp(sss, "yes") == 0)
	{
		system("sleep 0.7");

		printf("\n ☢ another joke :)\n");
	        char ddg[10];
	        scanf("%s", ddg);

	}
	else if(strcmp(sss, "no") == 0)
	{
	 	system("sleep 0.7");

		printf("\n ☢ ok :)\n");
	        char ddg[10];
	        scanf("%s", ddg);

        }
	else
	{
		system("sleep 0.7");

		printf("\n ☢ i didn't understand\n");
	        char ddg[10];
                scanf("%s", ddg);

	}
    }
    else if(strcmp(dsh, "no") == 0)
    {
	system("sleep 0.7");

	printf("\n ☢ ok :)\n");
	char ddg[10];
	scanf("%s", ddg);
    } 
    else
    {
	printf("☢ i didn't understand\n");
        char ddg[10];
        scanf("%s", ddg);
        system("sleep 0.7");
    }
    system("sleep 0.7");
    printf("\n ☢ today the whether is hot -_-\n");
    char shs[10];
    scanf("%s", shs);
    system("sleep 0.7");

    printf("\n ☢ the chat ended,soon i will develop this script\n");
}

