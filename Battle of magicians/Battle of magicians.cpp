#include <iostream>
#include "MyLib.h"

#define RUS setlocale(LC_ALL, "RU");

using namespace std;

int main()
{
    RUS   
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
}

