#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	int i;
	for (i = 0; i < j-1; i++)
		{
			printf ("%d,", vetor[i]);
		}
		if(j == 7)
		{
			printf("150\n");
		}else
		printf("%d]\n", vetor[j-1]);
}

void adicionarVetor(int size, int n, int *vetor)
{
	int i;
	int *tmp;
	tmp=calloc(size+1, sizeof(int));

	for(i = 0; i < size; i++)
	{
		if (n < vetor[i])
		{
			break;
		}
	}
	memmove(tmp, vetor+i, size);
	vetor[i] = n;
	memmove(vetor+i+1, tmp, size);
}

int main()
{
	int vetorAdicionar[8] = {100,110,120,130,140,150};
	int vetorDesordenado[6] = {7, 55, 5, 4, 76, 89};
	int vetorOrdenado[6] = {100, 110, 120, 130, 140, 150};
	int resLinear, resOrdenada, resBinaria;

	resLinear = buscaLinear(vetorDesordenado, 6, 89 );
	resOrdenada = buscaOrdenada(vetorOrdenado, 6, 150);
	resBinaria = buscaBinaria(vetorOrdenado, 6, 110);

	puts("\nBusca Linear:");
	printf("O resultado %d aparece na posi??o %d do vetor [",vetorDesordenado[resLinear], resLinear);
	printarVetor(6, vetorDesordenado);

	puts("\nBusca Ordenada:");
	printf("O resultado %d aparece na posi??o %d do vetor [",vetorOrdenado[resOrdenada], resOrdenada);
	printarVetor(6, vetorOrdenado);

	puts("\nBusca Binaria:");
	printf("O resultado %d aparece na posi??o %d do vetor [",vetorOrdenado[resBinaria], resBinaria);
	printarVetor(6, vetorOrdenado);


	adicionarVetor(6, 121, vetorAdicionar);

	puts("\nAdicionando Vetor ordenado:");
	printarVetor(7, vetorAdicionar);
}
