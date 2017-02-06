#include <stdio.h>

int main() 
{
	int n = 0, 
		first = 0, 
		second = 1, 
		next = 0, 
		count = 0;
	//kaleo
	//This is a comment
	// kaleo
	char option = 'y';
	
	while(option == 'y')
	{
		printf("Tell me the order number of the Fibonacci sequence that you desire\n");
		scanf("%d", &n);

		for (count = 0; count < n; count++)
		{
			if  (count <= 1)
			{
				next = count;
			}
			else
			{
				next = first + second;
				first = second;
				second = next;
			}
			
			printf("-> %d\n", next);
		}
		
		printf("The element you desire is %d\n\n", next);
				
		first = 0;
		second = 1;
		next = 0;
		count = 0;
		
		printf("Let's do it again? y/n\n");
		scanf("%s", &option);
		
		printf("\n========================\n\n");
	}
	return 0;
}
