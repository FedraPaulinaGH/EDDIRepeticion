/*Un programa que imprima los primeros N números pares utilizando la siguiente regla: El 1er
número par (0) se imprime 1 vez, el 2o número par (2) se imprime 2 veces, el 3er número
par (4) se imprime 4 veces, el 4º número par (6) se imprime 8 veces y así sucesivamente
hasta completar N número pares. Por ejemplo, si N = 4 ... 0,2,2,4,4,4,4,6,6,6,6,6,6,6,6 */

#include <stdio.h>
#define N 30

int captura();
int det(int n);
void imprimir(int n);

int main ()
{
    int n, tope;
    n=captura();
    tope=det(n);
    imprimir(n);
}

int captura()
{
    int termino;
    printf("Cual termino deseas?\n");
    scanf("%d", &termino);
    return (termino);
}

int det(int n)
{
    int num=0, i=1, cont=0;

    while(i<n+1)
    {
       num=cont;
       cont+=2;
       i++;
    }
    printf("El numero par que corresponde al termino %d es %d\n", n, num);
    return(num);
}

void imprimir(int n)
{
    int num=0, i=1, cont=1, j;

    while(i<n+1)
    {
       for (j=0;j<cont;j++)
       {
            printf("%d", num);
       }
       num+=2;
       cont=cont*2;
       i++;
    }
}

