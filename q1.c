#include <stdio.h>

float process_transaction(float remaining_limit, float transaction_amount) {
    if (transaction_amount <= remaining_limit) {
        remaining_limit -= transaction_amount;
        printf("Transaction APPROVED\n");
    } else {
        printf("Transaction DECLINED\n");
    }
    return remaining_limit;
}

int main() {
    float remaining_limit = 5000.0;
    float transaction_amount;

    printf("Enter transaction amount: ");
    scanf("%f", &transaction_amount);

    remaining_limit = process_transaction(remaining_limit, transaction_amount);

    printf("Remaining limit: $%.2f\n", remaining_limit);

    return 0;
}
