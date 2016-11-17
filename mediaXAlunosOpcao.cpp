#include <stdio.h>

int main()
{
	char nome[50] = "",
		 option = 's';
	
	float nota1[] = { 0, 0, 0 },
	      nota2[] = { 0, 0, 0 },
		  media[] = { 0, 0, 0 },
		  mediaSala = 0;
	
	int count = 0,
		students = 0;
	
	while (option == 's')
	{
		printf("How many students?\n");
		scanf("%d", &students);
			
		while (count < students){
		
			printf("\nHi! What's your name?\n");
			scanf("%s", &nome);
			
			printf("\nWhat's your first grade?\n");
			scanf("%f", &nota1[count]);
			
			printf("\nWhat's your second grade?\n");
			scanf("%f", &nota2[count]);
			
			media[count] = (nota1[count] + nota2[count]) / 2;
			
			printf("\nHi, %s! Your average was %.2f\n\n", nome, media[count]);
			
			mediaSala = mediaSala + media[count];
			
			count++;		
		}
		
		mediaSala = mediaSala / students;
			
		printf("The classroom average was %.2f\n\n", mediaSala);
		
		students = 0;
		
		printf("\nDo you wish continue?\n");
		scanf("%s", &option);
	}
	
	return 0;
}
