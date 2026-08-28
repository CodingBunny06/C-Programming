#include<stdio.h>
int main()
{
    int item_price = 250;
    int quantity = 3;
    const int GST = 18;

    float subtotal = item_price * quantity;
    float GST_amount = subtotal * (GST/100.0);
    float final_bill = subtotal + GST_amount;

    printf("subtotal = %.2f\n",subtotal);
    printf("Quantity = %d\n", quantity);
    printf("GST = %.2f\n",GST_amount);
    printf("Final bill= %.2f\n",final_bill);

    return 0;
}