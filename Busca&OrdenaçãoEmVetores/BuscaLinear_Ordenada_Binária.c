#include <stdio.h>

int buscaLinear(int *vetor, int n, int elem)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(elem == vetor[i])
        {
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *vetor, int n, int elem)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (elem == vetor[i])
		{
			return i;
		}
		else
		{
			if (elem < vetor[i])
				return (-1);
		}
	}
	return -1;
}

int buscaBinaria(int *vetor, int n, int elem)
{
	int i, inicio, meio, fim;
	inicio = 0;
	fim = n - 1;

	while (inicio <= fim)
	{
		meio = (inicio + fim)/2;
		if(elem < vetor[meio])
		{
			fim = meio - 1;
		} else {
			if (elem > vetor[meio]){
				inicio = meio + 1;
			}else {
				return meio;
			}
		}
	}
	return -1;
}

void printarVetor(int j, int *vetor)
{
	for (j = 0; j <= 4; j++)
		{
			printf ("%d,", vetor[j]);
		}
		printf("%d]\n", vetor[5]);
}

int main()
{
	int vetorDesordenado[6] = {7, 55, 5, 4, 76, 89};
	int vetorOrdenado[6] = {100, 110, 120, 130, 140, 150};
	int resLinear, resOrdenada, resBinaria;

	resLinear = buscaLinear(vetorDesordenado, 6, 89 );
	resOrdenada = buscaOrdenada(vetorOrdenado, 6, 150);
	resBinaria = buscaBinaria(vetorOrdenado, 6, 110);

	puts("\nBusca Linear:");
	printf("O resultado %d aparece na posição %d do vetor [",vetorDesordenado[resLinear], resLinear);
	printarVetor(6, vetorDesordenado);

	puts("\nBusca Ordenada:");
	printf("O resultado %d aparece na posição %d do vetor [",vetorOrdenado[resOrdenada], resOrdenada);
	printarVetor(6, vetorOrdenado);

	puts("\nBusca Binaria:");
	printf("O resultado %d aparece na posição %d do vetor [",vetorOrdenado[resBinaria], resBinaria);
	printarVetor(6, vetorOrdenado);
}
