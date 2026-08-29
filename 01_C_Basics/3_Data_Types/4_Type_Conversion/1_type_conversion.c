#include<stdio.h>
int main()
{
    int a = 10;
    int b = 4;

    float result1 = a/b;
    float result2 = (float)a/b;

    printf("Without casting = %.2f\n", result1);
    printf("With casting = %.2f\n", result2);

    return 0;
}