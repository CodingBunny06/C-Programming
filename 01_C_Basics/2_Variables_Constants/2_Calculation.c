#include<stdio.h>
int main()
{
    int maths = 85;
    int physics = 78;
    int programming = 92;

    int total_marks = maths + physics + programming;
    float average_marks = total_marks/3;
    
    printf("Total marks =%d\n",total_marks);
    printf("Average marks =%.2f\n",average_marks);

    return 0;
}