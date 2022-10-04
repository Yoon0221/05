#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int answer = 59;
	int num;
	int cnt = 0;
			
	do
	{
		printf("Guess a number : ");
		scanf("%d", &num);
		
		if (num > answer)
		{
			printf("high! \n");
		}
		else if (num < answer)
		{
			printf("low! \n");
		}
		
		cnt = cnt + 1;
	}
	while (num != answer);
		
	printf("Congratulation! trials : %i \n", cnt);	
	
	
	return 0;
}
