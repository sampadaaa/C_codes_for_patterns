#include<stdio.h>
int main()
{
	int i, j, m=1, temp;
	for(i=1; i<=5  ;i++)
	{
		for(j=1 ; j<=3 ; j++)
		{
			printf("%d\t", m );
			m++;
		}
		temp=m-1;
		for(j=2; j>=1; j--)
		{
			printf("%d\t",--temp);
		
			
		}
		printf("\n");
		
		
	}
	return 0;
}
