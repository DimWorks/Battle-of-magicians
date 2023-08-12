#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "MyLib.h"

#define RUS setlocale(LC_ALL, "RU");

int main()
{
    RUS
        int isNotReady = 0;
    do {
        printf("Добро пожаловать на битву магов!\n");
        printf("Выберите стихию вашего героя:\n");
        printf("1. Огонь\n");
        printf("2. Вода\n");
        printf("3. Земля\n");
        printf("4. Воздух\n");
        printf("5. Выйти из игры\n");
        printf("Выш выбор: ");

        int element = -1;
        scanf_s("%d", &element);
        if (element > 0 && element < 5)
        {
            tellStory(element);
        }
        else
        {
            exit(EXIT_SUCCESS);
        }
        printf("\n\nВведите 1, чтобы подвердить выбор стихии\n");
        printf("Введите 2, чтобы вернуться к выбору стихии\n");
        printf("Введите любое число, чтобы выйти из игры\n");
        printf("Ваш выбор: ");
        scanf_s("%d", &isNotReady);
        printf("\n\n");
        if (isNotReady != 1 && isNotReady != 2)
        {
            exit(EXIT_SUCCESS);
        }
    } while (isNotReady == 2);



}

