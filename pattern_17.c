#include<stdio.h>
int main()
{
	int i, j, m=1, result;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			result=(i+j)%2==0 ? m++:0;
			printf("%d ", result);	
		}
		printf("\n");
	}
	return 0;
}
