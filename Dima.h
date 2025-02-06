#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printLine() {
    cout << "====================================\n";
}

void dima_function() {
    srand(time(0));
    int maxNumber;
    int secretNumber, guess, attempts = 0;
    char playAgain;

    do {
        printLine();
        cout << "   ЛАСКАВО ПРОСИМО В ГРУ 'ВГАДАЙ ЧИСЛО'   \n";
        printLine();
        cout << "Оберіть рівень складності:\n";
        cout << "1 - Від 1 до 50\n";
        cout << "2 - Від 1 до 100\n";
        cout << "3 - Від 1 до 150\n";
        cout << "Ваш вибір: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: maxNumber = 50; break;
        case 2: maxNumber = 100; break;
        case 3: maxNumber = 150; break;
        default:
            cout << "Невірний вибір. Гра почнеться з діапазоном 1-100.\n";
            maxNumber = 100;
        }

        secretNumber = rand() % maxNumber + 1;
        attempts = 0;

        cout << "Я загадав число від 1 до " << maxNumber << ". Спробуй його вгадати!       \n";

        do {
            cout << "Введи свою спробу: ";
            cin >> guess;
            attempts++;

            if (guess > secretNumber) {
                cout << "Загадане число менше. Спробуй ще!\n";
            }
            else if (guess < secretNumber) {
                cout << "Загадане число більше. Спробуй ще!\n";
            }
            else {
                cout << " Вітаю! Ти вгадав число " << secretNumber << " за " << attempts << " спроб! 🎉\n";
            }
        } while (guess != secretNumber);

        cout << "Хочеш зіграти ще раз? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Дякую за гру! Повертаємось до головного меню... \n";
}
