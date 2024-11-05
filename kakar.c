#include<stdio.h>
#include<stdlib.h>
int main()
{
	int user,comp,n;
	while(n)
	{
		printf("Enter 0 for Rock\t 1 for Scissor \t 2 for Paper\t 3 for Exit");
		scanf("%d",&user);
		comp= rand() %3;
		if(user==3)
		{
			exit(n);
		}
		else if(user==0&&comp==1)
		{
			printf("Congrats you won\t Rock beats Scissor");
		}
		else if(user==1&&comp==0)
		{
			printf("You lost\t Rock beats Scissor");
		}
			else if(user==0&&comp==2)
		{
			printf("You lost\t Paper beats Rock");
		}
			else if(user==2&&comp==0)
		{
			printf("Congrats you won\t Paper beats Rock");
		}
			else if(user==1&&comp==2)
		{
			printf("Congrats you won\t Scissor beats Paper");
		}
				else if(user==2&&comp==1)
		{
			printf("You lost\t Scissor beats Paper");
		}
		else
		{
			printf("Invalid command");
		}
	}
}
