#include <stdio.h>
int main() {
    int c, y, n;
    float m;

    printf("Current year: ");
    scanf_s("%d", &c);

    printf("Year of purchase: ");
    scanf_s("%d", &y);

    printf("Original price: ");
    scanf_s("%f", &m);

    //n = c-y;

    while (c > y) {
    printf("\nYear %d ", y);
    y = y + 1;
    printf("\nThe price is: %.2f", m);
    m = m + (m * 0.04);
    }
    printf("\nToday, in %d, the cost would be %.2f dollars.", y, m);
}