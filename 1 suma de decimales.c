/*Un programa que pida n�meros flotantes hasta que el n�mero ingresado no contenga
decimales. El programa deber� mostrar al final, solamente la suma de los decimales de
cada n�mero*/

#include <stdio.h>
#define N 10

int Captura(float Arreglo[N]);
float SumaDeci(float Arreglo [N], int tope);
void Imprime(float Arreglo[N], int tope);

int main ()
{
    float Arreglo[N], suma;
    int tope;

    tope=Captura(Arreglo);
    Imprime(Arreglo, tope);
    suma=SumaDeci(Arreglo, tope);
    printf("\n\nLa suma de los decimales es: %.5f\n\n", suma);

}

int Captura(float Arreglo[N])
{
    float dato, num;
    int cont, v;

    for (cont=0; cont<N ; cont++)
    {
        printf("Dame el valor %d: ", cont+1);
        scanf("%f", &dato);
        v=dato;
        if (dato-v > 0)
        {
           Arreglo[cont]=dato;
        }
        else
        {
            return(cont);
            //cont=10;
        }
    }
    return(cont);
}

void Imprime (float Arreglo[N], int tope)
{
     int i;

     for (i=0; i<tope; i++)
     {

         printf("\n%d) %.5f", i+1, Arreglo[i]);
     }
}

float SumaDeci(float Arreglo[N], int tope)
{
    int i, v;
    float suma=0;
    for (i=0; i<tope; i++)
    {
        v=Arreglo[i];
        suma+=Arreglo[i]-v;

    }
    return suma;
}


