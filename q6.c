#include <stdio.h>

float calculate_tax(float gross_income, float *net_income) {
    float tax = 0.0;

    if (gross_income <= 20000) {
        tax = 0.0;
    } 
    else if (gross_income <= 50000) {
        tax = (gross_income - 20000) * 0.10;
    } 
    else {
        tax = (30000 * 0.10) + ((gross_income - 50000) * 0.20);
    }

    *net_income = gross_income - tax;  // store net income using pointer
    return tax;  // return the tax amount
}

int main() {
    float gross_income, tax, net_income;

    printf("Enter gross income ($): ");
    scanf("%f", &gross_income);

    tax = calculate_tax(gross_income, &net_income);

    printf("\nTax Amount: $%.2f\n", tax);
    printf("Net Income: $%.2f\n", net_income);

    return 0;
}
