#include <stdio.h>

float calculate_bill(float food_cost, int people) {
    float tax, tip, service_charge = 0.0, total;

    // Calculate tax (8%)
    tax = food_cost * 0.08;

    // Calculate tip (15% if > $50, else 10%)
    if (food_cost > 50)
        tip = food_cost * 0.15;
    else
        tip = food_cost * 0.10;

    // Service charge (5% if more than 6 people)
    if (people > 6)
        service_charge = food_cost * 0.05;

    // Total bill
    total = food_cost + tax + tip + service_charge;

    // Display breakdown
    printf("Tax: $%.2f\n", tax);
    printf("Tip: $%.2f\n", tip);
    if (people > 6)
        printf("Service Charge: $%.2f\n", service_charge);
    else
        printf("Service Charge: $0.00\n");

    return total;
}

int main() {
    float food_cost, total_bill;
    int people;

    printf("Enter total food cost ($): ");
    scanf("%f", &food_cost);

    printf("Enter number of people: ");
    scanf("%d", &people);

    total_bill = calculate_bill(food_cost, people);

    printf("\nTotal Bill: $%.2f\n", total_bill);

    return 0;
}
