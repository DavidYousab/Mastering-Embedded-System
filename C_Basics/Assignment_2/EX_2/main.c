#include "stdio.h"

void main()
{
	char A;
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&A);

	switch(A)
	{
	case 'a':
	case 'A':
		printf("%c is Vowel",A);
	break;

	case 'e':
	case 'E':
		printf("%c is Vowel",A);
	break;


	case 'i':
	case 'I':
		printf("%c is Vowel",A);
	break;

	case 'U':
	case 'u':
		printf("%c is Vowel",A);
	break;

	case 'O':
	case 'o':
		printf("%c is Vowel",A);
	break;
	default:
		printf("%c is constant",A);
		break;
	}

}
