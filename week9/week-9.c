#include <stdio.h>

int calculate(int a, int b, int c, int q, int *sum, int *diff, int *mul, int *div)
{

    *sum = a + b + c + q;
    *diff = a - b - c - q;
    *mul = a * b * c * q;
    *div  = (b != 0 && c != 0 && q != 0) ? (a / b / c / q) : 0;
}

int main()
{
    int x, y, z, w;
    printf("Enter First Numbers: ");
    scanf("%d", &x);
    printf("Enter Second Numbers: ");
    scanf("%d", &y);
    printf("Enter Third Numbers: ");
    scanf("%d", &z);
    printf("Enter Fourth Numbers: ");
    scanf("%d", &w);

    int s, d, m;
    float di;
    calculate(x, y, z, w, &s, &d, &m, &di);
    printf("\nSum        = %d", s);
    printf("\nDifference = %d", d);
    printf("\nMultiply   = %d", m);
    if (y != 0 && z != 0 && w != 0)
        printf("\nDivision   = %.2f\n", di);
    else
        printf("\nDivision   = Cannot divide by zero\n");

    return 0;
}