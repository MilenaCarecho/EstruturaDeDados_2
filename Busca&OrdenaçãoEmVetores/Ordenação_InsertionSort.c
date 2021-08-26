#include <stdio.h>

void insertionSort(int *v, int n)
{
	int i, j, aux;
	for (i = 1; i < n - 1; i++)
	{
		aux = v[i];
		for(j = i; (j > 0) && (aux < v[j-1]); j--)
		{
			v[j] = v[j - 1];
		}
		v[j] = aux;
	}
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

	puts("\nRealizando ordenação pelo metodo insertionSort ...\n");

	int n = sizeof(vetor)/sizeof(vetor[0]);
	insertionSort(vetor, n);
	printf("Vetor ordenado:");
	printaVetor(10, vetor);

}
