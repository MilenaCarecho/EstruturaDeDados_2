#include<stdio.h>
#include<stdlib.h>

int buscaLinear(int *vetor, int n, int elem)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (elem == vetor[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    buscaLinear([120, 150, 110, 130, 100, 160, 140, 190, 170, 180], 10, 100);
}
