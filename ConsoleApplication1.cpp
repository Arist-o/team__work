
#include <iostream>
#include <Windows.h>
#include "Dima.h"
#include "Artur.h"
#include "Sasha.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int variant;
    cout << R"( Виберіть мінігру зі списку 
                                1 вгадай число(Dima)
                                2 підкидування копійки(Artur)
                                3 камінь-ножиці-папір(Sasha)   )" << endl;
    cin >> variant;
    switch (variant)
    {
    case 1:
        dima_function();
        break;
    case 2:
        artur_function();
        break;
    case 3:
        shasha_function();
        break;
    }
}
