#include <stdio.h>

void selectionSort(int *v, int n)
{
	int i, j, menor, troca;
	for (i = 0; i < n - 1; i++)
	{
		menor = i;
		for(j = i + 1; j < n; j++)
		{
			if (v[j] < v[menor])
			{
				menor=j;
			}
		}
		if (i != menor)
		{
			troca = v[i];
			v[i] =  v[menor];
			v[menor] = troca;
		}
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

	puts("\nRealizando ordenação pelo metodo selectionSort ...\n");

	int n = sizeof(vetor)/sizeof(vetor[0]);
	selectionSort(vetor, n);
	printf("Vetor ordenado:");
	printaVetor(10, vetor);

}
