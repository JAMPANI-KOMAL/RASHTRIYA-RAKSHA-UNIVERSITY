//Practice using loops (while, do-while, for) to print all 10 patterns (triangles, squares, etc.).
//Program to print a square of stars using do while loop.
#include <stdio.h>
int main()
{
	int i=1, j=1, n;
	printf("Enter your number: ");
	scanf("%d", &n);
	do 
	{	
		do 
		{
			printf("*");
			j++;
		}
		while(j<=n);
		printf("\n");
		i++;
		j=1;
	}
	while(i<=n);
	
	
	return 0;
}
