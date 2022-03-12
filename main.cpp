#include "libraries.h"

#include "county.h"
#include "funck.h"


int selected_number_in_menu = 1;

void Menu(){

    cout << "Вибервіть яку дію ви хочете виконати " << endl
         <<"1. Вивести частини(бригади) військового округу"<< endl
         <<"0. Вийти "<< endl;

    cin >> selected_number_in_menu;

    switch (selected_number_in_menu) {

        case 1:
            OutputPartsOfTheCounty();

            break;

        default:
            cout << "Некоректно введена дія!!!" << endl;
            break;
    }
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    TestInput();

    while (selected_number_in_menu != 0){

        Menu();

    }

};




