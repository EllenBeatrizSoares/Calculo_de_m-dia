#include<stdio.h>
#include<stdlib.h>

int main () {

float nota[3];

	

	printf("Digite a primeira nota: ");
	scanf_s("%f", &nota[0]);

	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota[1]);

	printf("Digite a terceira nota: ");
	scanf_s("%f", &nota[2]);

	nota[3] = (nota[0] + nota[1] + nota[2]) / 3;

	printf("A primeira nota = %f\n", nota[0]);
	printf("A segunda nota= %f\n", nota[1] );
	printf("A terceira nota= %f\n", nota[2]);



	if (nota[2] >= 7)
	{
		printf("APROVADO!");
	}
	else {
		printf("REPROVADO!");
	}
	
	printf("A primeira nota= %.2f\n nota", nota [0]);
	printf("A segunda nota= %.2f\n", nota[1]);
	printf("A terceira nota= %.2f\n", nota[2]);
	printf("A media das 3 notas: %.2f", nota[3]);
	
	system("pause");
	return 0;
}