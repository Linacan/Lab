#include <stdio.h>
#include <math.h>
int main() {
    double x, a, G, F, Y;
    printf("Введите х: ");
    scanf("%lf" , &x);
    printf("Введите a: ");
    scanf("%lf", &a);
    G = (9 * (7*pow(a, 2)- 19*a*x + 10*pow(x, 2)))/ (25*pow(a,2) + 30*a*x + 9*pow(x, 2));
    printf("G=%f\n\n", G);

    printf("Введите х: ");
    scanf("%lf" , &x);
    printf("Введите a: ");
    scanf("%lf", &a);
    F = cos(9*pow(a, 2) - 13*a*x - 10*pow(x, 2));
    printf("F=%f\n\n", F);

    printf("Введите х: ");
    scanf("%lf" , &x);
    printf("Введите a: ");
    scanf("%lf", &a);
    Y = log(-80*pow(a, 2) - 46*a*x + 21*pow(x, 2) + 1) / log (10);
    printf("Y=%f\n\n", Y);
    return 0;

}