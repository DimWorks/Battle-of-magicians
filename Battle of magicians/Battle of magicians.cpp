#include <iostream>
#include "MyLib.h"

#define RUS setlocale(LC_ALL, "RU");

using namespace std;

int main()
{
    RUS   
        bool isNotReady = true;
    do {
        cout << "Добро пожаловать на битву магов!\n"
            << "Выберите стихию вашего героя:\n"
            << "1. Огонь\n"
            << "2. Вода\n"
            << "3. Земля\n"
            << "4. Воздух\n"
            << "5. Выйти из игры\n"
            << "Выш выбор: ";

        int element = -1;
        cin >> element;
        if (element > 0 && element < 5)
        {
            tellStory(element);
        }
        else
        {
            exit(EXIT_SUCCESS);
        }
        cout << "Введите 1, чтобы подвердить выбор стихии\n"
            << "Введите 2, чтобы вернуться к выбору стихии\n"
            << "Введите любое число, чтобы выйти из игры\n";
        int tmp = 0;
        cin >> tmp;
        switch (tmp)
        {
        case 1:
            isNotReady = false;
            break;
        case 2:
            isNotReady = true;
            break;
        default:
            //cout << "ERROR\n";
            exit(EXIT_SUCCESS);
            break;
        }
    } while (isNotReady);
    
}

