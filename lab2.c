#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int a = 6;   // длина 
    int m = 3;   // высота 
    int l = 12;   // длина рулона
    int n = 1;   // ширина рулона
    int cost;     // цена рулона

    printf("Введите цену рулона: ");
    if (scanf_s("%d", &cost) != 1) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    int plosh_wall = a * m;
    int plosh_rullon = l * n;
    int nadrulonov = plosh_wall / plosh_rullon;

    if (plosh_wall % plosh_rullon != 0) {
        nadrulonov++;
    }

    int itog = nadrulonov * cost;

    printf("Площадь стены: %d кв.м\n", plosh_wall);
    printf("Площадь рулона: %d кв.м\n", plosh_rullon);
    printf("Кол-во рулонов: %d\n", nadrulonov);
    printf("Итоговая стоимость: %d руб.\n", itog);

    return 0;
}