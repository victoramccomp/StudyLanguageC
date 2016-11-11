#include <stdio.h>

int main() {
	int n, 
		first, 
		second, 
		next, 
		count;
	
	printf("Qual a sequencia desejada?\n");
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
		
		printf("%d\n", next);
	}
	
	printf("O elemento desejado: %d\n", next);
	
	return 0;
}
