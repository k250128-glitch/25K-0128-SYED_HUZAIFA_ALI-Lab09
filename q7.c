#include <stdio.h>

float calculate_rental_cost(int rental_days, float kilometers) {
    float base_rate = 40.0;              // $40 per day
    float total_base = rental_days * base_rate;
    float allowed_km = rental_days * 100; // 100 km allowed per day
    float extra_km = 0.0, extra_charge = 0.0, total_cost;

    // Check for extra mileage
    if (kilometers > allowed_km) {
        extra_km = kilometers - allowed_km;
        extra_charge = extra_km * 0.25;
    }

    total_cost = total_base + extra_charge;

    // Apply 10% discount for rentals 7 days or longer
    if (rental_days >= 7) {
        total_cost = total_cost * 0.90;
        printf("Long-term discount applied (10%% off)\n");
    }

    // Display breakdown
    printf("Base cost: $%.2f\n", total_base);
    printf("Extra charge: $%.2f\n", extra_charge);

    return total_cost;
}

int main() {
    int days;
    float km, total;

    printf("Enter number of rental days: ");
    scanf("%d", &days);

    printf("Enter total kilometers driven: ");
    scanf("%f", &km);

    total = calculate_rental_cost(days, km);

    printf("Total Rental Cost: $%.2f\n", total);

    return 0;
}
