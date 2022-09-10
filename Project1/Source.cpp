#include <stdio.h>
int main() {
    int curryear, yrofdep, intmoney, itogo;

    printf("Введите год покупки: ");
    scanf_s("%d", &yrofdep);

    printf("Введите оригинальную цену:");
    scanf_s("%d", &intmoney);

    printf("Введите настоящий год:");
    scanf_s("%d", &curryear);

    itogo = (intmoney + intmoney * 0, 04) * (curryear - yrofdep);

    printf("\nСегодня стоимость капитала составила бы %d долларов.", itogo);
}