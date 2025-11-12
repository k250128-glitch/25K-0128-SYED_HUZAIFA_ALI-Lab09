#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    
    int *temp;
    temp = p1;
    p1 = p2;  // p1 now points to b
    p2 = p3;  // p2 now points to c
    p3 = temp; // p3 now points to a

    
    *p1 += 10;    // b = 200 + 10 = 210
    *p2 -= 20;    // c = 300 - 20 = 280
    *p3 *= 2;     // a = 100 * 2 = 200

    
    p1 = &c;      // p1 points to c
    p2 = &a;      // p2 points to a
    p3 = &b;      // p3 points to b

  
    *p1 += 5;     // c = 280 + 5 = 285
    *p2 -= 15;    // a = 200 - 15 = 185
    *p3 *= 3;     // b = 210 * 3 = 630

    // Print final values
    printf("Final values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
