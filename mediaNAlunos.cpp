#include <stdio.h>

int main()
{
	char nome[50] = "";
	
	float nota1[] = { 0, 0, 0 },
	      nota2[] = { 0, 0, 0 },
		  media[] = { 0, 0, 0 },
		  mediaSala = 0;
	
	int count = 0;
		
	while (count < 3){
		
		printf("Hi! What's your name?\n");
		scanf("%s", &nome);
		
		printf("\nWhat's your first grade?\n");
		scanf("%f", &nota1[count]);
		
		printf("\nWhat's your second grade?\n");
		scanf("%f", &nota2[count]);
		
		media[count] = (nota1[count] + nota2[count]) / 2;
		
		printf("\nHi, %s! Your average was %.2f\n\n\n", nome, media[count]);
		
		count++;		
	}
	
	mediaSala = (media[0] + media[1] + media[2]) / 3;
		
	printf("The classroom average was %.2f\n\n\n", mediaSala);
	
	return 0;
}
