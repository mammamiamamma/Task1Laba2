#include <stdio.h>
int main() {
    int curryear, yrofdep, intmoney, itogo;

    printf("������� ��� �������: ");
    scanf_s("%d", &yrofdep);

    printf("������� ������������ ����:");
    scanf_s("%d", &intmoney);

    printf("������� ��������� ���:");
    scanf_s("%d", &curryear);

    itogo = (intmoney + intmoney * 0, 04) * (curryear - yrofdep);

    printf("\n������� ��������� �������� ��������� �� %d ��������.", itogo);
}