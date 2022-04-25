#include<stdio.h>
int main()
{
	int i, j, rows, columns;
	rows=columns=5;
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=columns; j++)
		{
			if(j>(rows-i))
				printf("*\t");
		 	else
		 		printf("\t");
		}
		printf("\n");	 		
	}
	return 0;
}
