#include <stdio.h>
#define N 10

int capYsuma(float *num);
void imprime(float num);
int main()
{
    int tope;
    float num;
    tope=capYsuma(&num);
    imprime(num);
}

int capYsuma(float *num)
{
    float dato;
    int cont, v;

    for (cont=0; cont<N ; cont++)
    {
        printf("Dame el valor %d: ", cont+1);
        scanf("%f", &dato);
        v=dato;
        if (dato-v > 0)
        {
           *num+=dato-v;
           //printf("La suma de los decimales es %.5f", *num);

        }
        else
        {
            //cont=10;
            return(cont);

        }
    }
    return(cont);
}

void imprime(float num)
{

    printf("\nLa suma de los decimales es %.5f\n\n", num);
}
