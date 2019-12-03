#include <stdio.h>
#include <stdlib.h>
/// N é p numero de termos que a serie tera
#define N 10000
double basel_Problem_approximated(int n_termos)
{
    double  basel_Problem, cont = 1;
    int i = 1;
    basel_Problem = 0;

    while(i < n_termos+1)
    {
        basel_Problem += ((1)/(cont*cont));
        i++;
        cont++;
    }

    return basel_Problem;
}
int main()
{
    double euler;
    euler = basel_Problem_approximated(N);
    printf("Uma boa aproximacao para o Problema da Basileia eh : %.15lf", euler);
    return 0;
}
