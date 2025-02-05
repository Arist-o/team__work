#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void shasha_function() {
        srand(time(0));
        int uC, cC;

        cout << "Оберіть: 1 - Камінь, 2 - Ножиці, 3 - Папір:  ";
        cin >> uC;

        if (uC < 1 || uC > 3) {
            cout << "Некоректний вибір! Спробуйте ще раз." << endl;
            return;
        }

        cC = rand() % 3 + 1;

        cout << "Комп'ютер обрав: ";
        switch (cC) {
        case 1: cout << "Камінь"; break;
        case 2: cout << "Ножиці"; break;
        case 3: cout << "Папір"; break;
        }
        cout << endl;

        if (uC == cC) {
            cout << "Нічия." << endl;
        }
        else if ((uC == 1 && cC == 2) ||
            (uC == 2 && cC == 3) ||
            (uC == 3 && cC == 1)) {
            cout << "Ви виграли." << endl;
        }
        else {
            cout << "Ви програли." << endl;
        }
    }
