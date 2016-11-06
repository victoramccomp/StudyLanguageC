#include <stdio.h>

int main()
{
	char nome[50];
	
	float nota1 = 0, 
	      nota2 = 0,
		  media = 0;
	
	printf("Hi! What's your name?\n\n");
	scanf("%s", &nome);
	
	printf("What's your first grade?\n\n");
	scanf("%f", &nota1);
	
	printf("What's your second grade?\n\n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Hi, %s! Your average was %.2f\n\n\n", nome, media);
	
	return 0;
}
