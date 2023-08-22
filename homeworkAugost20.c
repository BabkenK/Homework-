#include <stdio.h>

int main ()
{
	char sym;
	
	printf("Enter the symbol: ");
	scanf("%c", &sym);	

	if (sym >= 0 && sym <=9);
	printf("Thank you, you enter %c number \n", sym);
	} else {
	printf("program denied \n");
	}
	return 0;
}
