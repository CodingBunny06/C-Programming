#include<stdio.h>
int main()
{
    char a, b, c;

    printf("Enter 3 characters: ");
    a = getchar();
    b = getchar();
    c = getchar();

    printf("You entered: %c%c%c\n",a, b, c);

    return 0;
}