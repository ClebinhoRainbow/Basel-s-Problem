#include <stdio.h>
#include <stdlib.h>
/// N é p numero de termos que a serie tera
#define N 10000
double pi_aproximado (int n_termos)
{
    double sinal, pi, i , denominador;
    sinal = 1; pi =3;
    for(i = 1 ; i< n_termos; i++)
    {
        denominador = i*2 * (i*2+1)* (i*2+2);
        pi += sinal*4 / denominador;
        sinal *= -1;
    }
    return pi;
}
double basel_Problem_approximated(int n_termos)
{
    double pi, basel_Problem;
    pi = pi_aproximado(n_termos);
    basel_Problem = (pi*pi)/6;
    return basel_Problem;
}
int main()
{
    double euler;
    euler = basel_Problem_approximated(N);
    printf("Uma boa aproximacao para o Problema da Basileia eh : %.15lf", euler);
    return 0;
}
