
// Coded by Mr MJT

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" ☢ Enter the decimal number: \n");
    printf("\n");
    system("bash enter");
    int x;
    scanf("%d", &x);
    switch (x)
    {
	case 0:
	  printf(" ☢ 0 is 0000 in binary\n");
       	  break;

	case 1:
	  printf(" ☢ 1 is 0001 in binary\n");
	  break;

	case 2:
	  printf(" ☢ 2 is 0010 in binary\n");
	  break;

	case 3:
	  printf(" ☢ 3 is 0011 in binary\n");
	  break;

	case 4:
	  printf(" ☢ 4 is 0100 in binary\n");
	  break;

        case 5:
	  printf(" ☢ 5 is 0101 in binary\n");
 	  break;

	case 6:
	  printf(" ☢ 6 is 0110 in binary\n");
	  break;

	case 7:
	  printf(" ☢ 7 is 0111 in binary\n");
	  break;

	case 8:
	  printf(" ☢ 8 is 1000 in binary\n");
	  break;

	case 9:
	  printf(" ☢ 9 is 1001 in binary\n");
	  break;

	default:
	  printf(" ☢ Error: Decimal Number = 0 -> 9\n");

    }
}
