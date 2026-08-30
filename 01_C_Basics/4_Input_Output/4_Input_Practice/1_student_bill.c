#include<stdio.h>
#include<string.h>

int main()
{
    char name[50], grade;
    int age;
    float subject1, subject2, subject3;
    float total_fees = 50000, paid, remaining;

    printf("--- Student Report ---\n");
    
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Age: ");
    scanf("%d",&age);
    int age_next_year = age + 1;
    printf("Age next year: %d\n",age_next_year);

    printf("Grade: ");
    scanf(" %c",&grade);

    printf("\nMarks:\n");
    
    printf("Subject 1: ");
    scanf("%f",&subject1);
    printf("Subject 2: ");
    scanf("%f",&subject2);
    printf("Subject 3: ");
    scanf("%f",&subject3);
    
    float total = subject1 + subject2 + subject3;
    printf("Total: %.1f\n",total);

    float average = total / 3;
    printf("Average: %.1f\n",average);

    printf("\nFees:\n");
    printf("Total fees: 50000.00\n");
    printf("Paid: ");
    scanf("%f", &paid);
    remaining = total_fees - paid;
    printf("Remaining fees: %.2f\n",remaining);

    return 0;
}