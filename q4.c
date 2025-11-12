#include <stdio.h>

float calculate_total(float order_amount, float weight) {
    float shipping_cost = 0.0;

    if (order_amount > 100) {
        shipping_cost = 0.0;
        printf("Free shipping applied!\n");
    } 
    else {
        if (weight < 2)
            shipping_cost = 10.0;
        else if (weight <= 5)
            shipping_cost = 15.0;
        else
            shipping_cost = 20.0;

        printf("Shipping cost: $%.2f\n", shipping_cost);
    }

    float total_cost = order_amount + shipping_cost;
    return total_cost;
}

int main() {
    float order_amount, weight, total;

    printf("Enter order amount ($): ");
    scanf("%f", &order_amount);

    printf("Enter package weight (kg): ");
    scanf("%f", &weight);

    total = calculate_total(order_amount, weight);

    printf("Total cost: $%.2f\n", total);

    return 0;
} 
