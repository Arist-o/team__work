#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void shasha_function() {
        srand(time(0));
        int uC, cC;

        cout << "������: 1 - �����, 2 - ������, 3 - ����:  ";
        cin >> uC;

        if (uC < 1 || uC > 3) {
            cout << "����������� ����! ��������� �� ���." << endl;
            return;
        }

        cC = rand() % 3 + 1;

        cout << "����'���� �����: ";
        switch (cC) {
        case 1: cout << "�����"; break;
        case 2: cout << "������"; break;
        case 3: cout << "����"; break;
        }
        cout << endl;

        if (uC == cC) {
            cout << "ͳ���." << endl;
        }
        else if ((uC == 1 && cC == 2) ||
            (uC == 2 && cC == 3) ||
            (uC == 3 && cC == 1)) {
            cout << "�� �������." << endl;
        }
        else {
            cout << "�� ��������." << endl;
        }
    }
