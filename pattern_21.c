#include<stdio.h>
int main()
{
	int i, j;
	for(i=1; i<=5; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j>(5-i))
				printf("%c\t",(char)(i+64));
			else
				printf("\t");	
		}
		printf("\n");		
	}
	return 0;
}
