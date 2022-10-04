#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x, y, num;
	char k;
	
	printf("enter the calculation : ");
	scanf("%d %c %d", &x, &k, &y);
	
	if (k == '+')
	{
		num = x + y;
	}
	else if (k == '-')
	{
		num = x - y;
	}
	else if (k == '*')
	{
		num = x * y;
	}
	else
	{
		num = x / y;
	}
	
	printf("= %i \n", num);
	
	return 0;
}
