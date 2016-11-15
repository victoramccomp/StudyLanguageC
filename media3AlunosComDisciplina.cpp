#include <stdio.h>

int main()
{
	char nome[50] = "";
	
	float notaPortugues1[] = { 0, 0, 0 },
	      notaPortugues2[] = { 0, 0, 0 },
	      notaIngles1[] = { 0, 0, 0 },
	      notaIngles2[] = { 0, 0, 0 },
		  mediaPortugues[] = { 0, 0, 0 },
		  mediaIngles[] = { 0, 0, 0 },
		  mediaCurso[] = { 0, 0, 0 },
		  media[] = { 0, 0, 0 },
		  mediaSala = 0;
	
	int count = 0,
		disciplina = 0;
		
	while (count < 3)
	{		
		printf("Hi! What's your name?\n");
		scanf("%s", &nome);
		
		printf("\nWhat's your first grade in Portuguese?\n");
		scanf("%f", &notaPortugues1[count]);
		printf("\nWhat's your second grade in Portuguese?\n");
		scanf("%f", &notaPortugues2[count]);
		
		printf("\nWhat's your first grade in English?\n");
		scanf("%f", &notaIngles1[count]);
		printf("\nWhat's your second grade in English?\n");
		scanf("%f", &notaIngles2[count]);
		
		mediaPortugues[count] = (notaPortugues1[count] + notaPortugues2[count]) / 2;
		printf("\nHi, %s! Your average in Portuguese was %.2f\n", nome, mediaPortugues[count]);

		mediaIngles[count] = (notaIngles1[count] + notaIngles2[count]) / 2;
		printf("\nHi, %s! Your average in English was %.2f\n", nome, mediaIngles[count]);

		mediaCurso[count] = (mediaPortugues[count] + mediaIngles[count]) / 2;
		printf("\nHi, %s! Your average was %.2f\n\n\n", nome, mediaCurso[count]);
					
		count++;
	}
	
	mediaSala = (mediaCurso[0] + mediaCurso[1] + mediaCurso[2]) / 3;
		
	printf("The classroom average was %.2f\n\n\n", mediaSala);
	
	return 0;
}
