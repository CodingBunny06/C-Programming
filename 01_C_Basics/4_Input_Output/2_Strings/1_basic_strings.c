#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int age;
    char grade;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your grade: ");
    scanf(" %c",&grade);

    int age_next_year = age + 1;

    printf("--- Profile ---\n");
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Age next year: %d\n",age_next_year);
    printf("Grade: %c\n",grade);

    return 0;
}