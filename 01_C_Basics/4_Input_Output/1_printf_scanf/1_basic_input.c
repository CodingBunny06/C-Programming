#include<stdio.h>
int main()
{
    char name;
    int age;
    float height;
    char grade;

    printf("Enter initial: ");
    scanf( "%c",&name);

    printf("Enter your age: ");
    if (scanf("%d", &age) == 1)
    {
    printf("Valid age: %d\n", age);
    }
    else
    {
    printf("Invalid input!\n");
    }

    printf("Enter height in meters: ");
    scanf("%f",&height);

    printf("Enter grade: ");
    scanf(" %c",&grade);

    printf("\n--- Student Info ---\n");

    printf("Initial: %c\n",name);    
    printf("Age: %d\n",age);
    
    int Age_next_year = age + 1;

    printf("Age next year: %d\n",Age_next_year);
    printf("Height: %.2f m\n",height);    
    printf("Grade %c\n",grade);    

    return 0;
}