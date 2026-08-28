#include<stdio.h>
int main()
{
    int age = 20;
    age = 21;
    float height = 1.78f;
    int semester = 1;
    char grade = 'A';
    const int DAYS_IN_WEEK = 7;
     
    printf("age = %d\n",age);
    printf("height = %f\n",height);
    printf("semester = %d\n",semester);
    printf("grade = %c\n",grade);
    printf("DAYS_IN_WEEK = %d\n",DAYS_IN_WEEK);

    return 0;
}