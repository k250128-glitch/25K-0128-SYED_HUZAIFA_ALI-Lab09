#include <stdio.h>

float calculate_average(float s1, float s2, float s3) {
    float average = (s1 + s2 + s3) / 3.0;

    if (average >= 50 && s1 >= 40 && s2 >= 40 && s3 >= 40) {
        printf("PASS\n");
    } 
    else {
        printf("FAIL - ");
        if (average < 50)
            printf("Average below 50");
        else if (s1 < 40 || s2 < 40 || s3 < 40)
            printf("One or more subjects below 40");
        printf("\n");
    }

    return average;
}

int main() {
    float sub1, sub2, sub3, avg;

    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    avg = calculate_average(sub1, sub2, sub3);

    printf("Average marks: %.2f\n", avg);

    return 0;
}
