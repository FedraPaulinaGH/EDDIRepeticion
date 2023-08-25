/*Realice un programa para leer las 3 calificaciones parciales de los N alumnos del grupo de
Estructuras y muestre el número de aprobados y reprobados, así como el promedio
general del grupo.*/

#include <stdio.h>

int Alumnos(int *n);
float CapturaCali(int *n, float *cal, int *a, int *r);
int AoR(int a, int r);
float pGral(int n, float prom);

int main()
{
    int n, a, r;
    float cal, prom;

    Alumnos(&n);
    prom= CapturaCali(&n, &cal, &a, &r);
    AoR(a, r);
    pGral(n, prom);
}

int Alumnos(int *n)
{
    printf("Cuantos alumnos son?");
    scanf("%d", n);
}

float CapturaCali(int *n, float *cal, int *a, int *r)
{
    int i, j, m=3;
    *a=0;
    *r=0;
    float cont=0, prom, p;
    for (i=0;i<*n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("\nCual es la calificacion %d del alumno %d: ", j+1, i+1);
            scanf("%f", cal);
            cont+=*cal;
        }
        prom=cont/3;
        printf("El promedio es %.2f\n", prom);
        p+=prom;
        if(prom>=6)
        {
            printf("Aprobado\n");
            *a+=1;
        }
        else
        {
            printf("Reprobado\n");
            *r+=1;
        }
        cont=0;
    }
    return p;

}

int AoR(int a, int r)
{
    printf("\nLa cantidad de aprobados es: %d\n", a);
    printf("\nLa cantidad de reprobados es: %d\n", r);
}

float pGral(int n, float prom)
{
    float pg;
    pg=prom/n;
    printf("\nEl promedio general del grupo es: %.2f\n", pg);
}
