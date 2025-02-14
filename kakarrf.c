#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char word[]="ka_ar";
	char o='k';
	int i,v=3;
	for(i=0 ; i<3 ; i++)
	{
		printf("%s\n",word);
		printf("Enter the omitted character\n");
		char x;
		scanf("%c",&x);
		if(x==o)
		{
			printf("The guess is correct you won\n");
			break;
		}
		else
		{
			printf("Wrong guess %d attempts remaining\n",v);
			--v;
		}
		scanf("%c",&x);
	}
	if(v==0)
	{
		printf("You lost the game\n");
	}
	else
	{
		printf("You won");
	}
}
