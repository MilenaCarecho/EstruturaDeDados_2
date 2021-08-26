#include <stdio.h>

void bubbleSort(int *v, int n)
{
	int i, continua, aux, fim = n;
	do
	{
		continua = 0;
		for (i = 0; i < fim - 1; i++)
		{
			if (v[i] > v[i + 1])
			{
				aux = v[i];
				v[i] = v [i + 1];
				v[i + 1] = aux;
				continua = i;
			}
		}
		fim--;
	}while(continua != 0);
}

void printaVetor(int j, int *vetor)
{
	int i;
	for (i = 0; i < j-1; i++)
	{
		printf ("%d ", vetor[i]);
	}
	printf("\n");
}

int main()
{

	int vetor[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};
	printf("Vetor desordenado: ");
	printaVetor(10, vetor);

	puts("\nRealizando ordenação pelo metodo bubbleSort ...\n");

	int n = sizeof(vetor)/sizeof(vetor[0]);
	bubbleSort(vetor, n);
	printf("Vetor ordenado:");
	printaVetor(10, vetor);

}
