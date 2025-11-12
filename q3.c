#include <stdio.h>

int analyze_temperature(float temp) {
    int code;

    if (temp > 35) {
        code = 1;
        printf("HEAT ALERT\n");
    } 
    else if (temp < 10) {
        code = 2;
        printf("COLD ALERT\n");
    } 
    else if (temp >= 15 && temp <= 25) {
        code = 3;
        printf("COMFORT ZONE\n");
    } 
    else {
        code = 4;
        printf("NORMAL CONDITIONS\n");
    }

    return code;
}

int main() {
    float temperature;
    int alert_code;

    printf("Enter current temperature (°C): ");
    scanf("%f", &temperature);

    alert_code = analyze_temperature(temperature);

    printf("Alert Code: %d\n", alert_code);

    return 0;
}

