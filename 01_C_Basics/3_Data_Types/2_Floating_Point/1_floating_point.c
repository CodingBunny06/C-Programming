#include <stdio.h>
int main ()
{
    float a = 1.123456789;
    double b = 1.123456789;
    printf("float  = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));
    return 0;
}