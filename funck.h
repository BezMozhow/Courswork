//
// Created by Сергій on 3/8/2022.
//
#include "libraries.h"

#ifndef COURSWORK_FUNCK_H
#define COURSWORK_FUNCK_H

vector<County> items;


void TestInput(){

    County Test;

    Test.county_name = "West";
    Test.rank_of_commander_county = "General of the Army";
    Test.county_commander = "Vasyl Ivanovych Bugaenko";

    Test.army_name = "Army";

    Test.corpus_name = "Army Corps";
    Test.rank_of_commander_corpus = "Lieutenant General";
    Test.corpus_commander = "Mykulyak Serhiy Romanovych";

    Test.division_name = "4th Mechanized Division";
    Test.rank_of_commander_division = "Major General";
    Test.division_commander = "Masnyuk Andrey Vasilyevich";

    /*-------------------------------------------------------------------*/

    Test.brigade_name = "122th separate mountain assault brigade"; /*10-та окрема гірсько-штурмова бригада*/
    Test.rank_of_commander_brigade = "Colonel";/*Полковник*/
    Test.brigade_commander = "Kotlyk Vyacheslav Yuriyovych";

    /*------------------------------------------------------------------*/

    Test.battalion_name = "108th Detached Mountain Assault Battalion"; /*108-й окремий гірсько-штурмовий батальйон*/
    Test.rank_of_commander_battalion = "Major";
    Test.battalion_commander = "Bolekhan Vladimir Mikhailovich";

    Test.company_name = "1 mountain assault company"; /*1 гірсько-штурмова рота*/
    Test.rank_of_commander_company = "Captain";
    Test.company_commander = "Petrovich Sergey Ivanovich";

    Test.platoon_name = "Platoon of fire support"; /*Взвод вогневої підтримки*/
    Test.rank_of_commander_platoon = "Lieutenant";
    Test.platoon_commander = "Ponomarenko Alla Nikolaevna";

    Test.branch_name = "Mechanized military support department"; /*Механізоване відділення воєнної відтримки*/
    Test.rank_of_commander_branch = "Sergeant";
    Test.branch_commander = "Masnyuk Andrey Valentinovich";

    items.push_back(Test);

    /*2*/
    Test.county_name = "West";
    Test.rank_of_commander_county = "General of the Army";
    Test.county_commander = "Vasyl Ivanovych Bugaenko";

    Test.army_name = "Army";

    Test.corpus_name = "Army Corps";
    Test.rank_of_commander_corpus = "Lieutenant General";
    Test.corpus_commander = "Mykulyak Serhiy Romanovych";

    Test.division_name = "4th Mechanized Division";
    Test.rank_of_commander_division = "Major General";
    Test.division_commander = "Masnyuk Andrey Vasilyevich";

    /*-------------------------------------------------------------------*/

    Test.brigade_name = "110th separate mountain assault brigade"; /*10-та окрема гірсько-штурмова бригада*/
    Test.rank_of_commander_brigade = "Colonel";
    Test.brigade_commander = "Mykulyak Serhiy Romanovych";

    /*------------------------------------------------------------------*/

    Test.battalion_name = "44th Detached Mountain Assault Battalion"; /*44-й окремий гірсько-штурмовий батальйон*/
    Test.rank_of_commander_battalion = "Major";
    Test.battalion_commander = "Sergey Ivanovich Sergienko";

    Test.company_name = "2 mountain assault company"; /*2 гірсько-штурмова рота*/
    Test.rank_of_commander_company = "Captain";
    Test.company_commander = "Polyakova Anna Vladimirovna";

    Test.platoon_name = "Mechanical platoon"; /*Механічний взвод*/
    Test.rank_of_commander_platoon = "Lieutenant";
    Test.platoon_commander = "Kuleba Sergey Ivanovich";

    Test.branch_name = "Post office"; /*Відділення зв'язку*/
    Test.rank_of_commander_branch = "Сержант";
    Test.branch_commander = "Gaideychuk Stepan Valentinovich";

    items.push_back(Test);


    /*3*/
    Test.county_name = "West";
    Test.rank_of_commander_county = "General of the Army";
    Test.county_commander = "Vasyl Ivanovych Bugaenko";

    Test.army_name = "Army";

    Test.corpus_name = "Army Corps";
    Test.rank_of_commander_corpus = "Lieutenant General";
    Test.corpus_commander = "Mykulyak Serhiy Romanovych";

    Test.division_name = "4th Mechanized Division";
    Test.rank_of_commander_division = "Major General";
    Test.division_commander = "Masnyuk Andrey Vasilyevich";

    /*-------------------------------------------------------------------*/

    Test.brigade_name = "104th Detached Mountain Assault Brigade";
    Test.rank_of_commander_brigade = "Colonel";
    Test.brigade_commander = "Stashkiv Yuri Bogdanovich";

    /*------------------------------------------------------------------*/

    Test.battalion_name = "124th Detached Mountain Assault Battalion"; /*124-й окремий гірсько-штурмовий батальйон*/
    Test.rank_of_commander_battalion = "Major";
    Test.battalion_commander = "Ivanyshyn Bohdan Serhiiovych";

    Test.company_name = "4 mountain assault company"; /*4 гірсько-штурмова рота*/
    Test.rank_of_commander_company = "Captain";
    Test.company_commander = "Gavrilchuk Ivan Bogdanovich";

    Test.platoon_name = "Infantry platoon "; /*Піхотний взвод*/
    Test.rank_of_commander_platoon = "Lieutenant";
    Test.platoon_commander = "Pertrevoch Ivan Bogdanovich";

    Test.branch_name = "Department of Medical Care"; /*Відділення медичної допомоги*/
    Test.rank_of_commander_branch = "Sergeant";
    Test.branch_commander = "Ostryzhnyuk Valery Ivanovich";

    items.push_back(Test);

};




void AddItem(){
    SetConsoleOutputCP(CP_UTF8);

}

string SearchBrigade(string val_name){



};


/*-------------------------1-------------------------*/

void OutputPartsOfTheCounty(){

    int selected_number;
    string name;

    cout << "По чому ви хочете здійснити пошук військових частин(бригад)?" << endl
    << "1. Корпусу" << endl
    << "2. Дивізії" << endl
    << "0. Вийти" << endl;

    cin >> selected_number;



    switch (selected_number) {
        case 1:

            cout << "Введіть назву корпусу, військові частини(бригади) якого ви хочете дізнатися" << endl;
            cout <<"Наявні корпуси: "<<endl
            << items[0].corpus_name << endl;


            cin.ignore();
            getline(cin, name);

            for (int i = 0; i < items.size(); ++i) {

                if (items[i].corpus_name == name){
                    cout <<"Військова частина: "<< items[i].brigade_name<< endl
                         << "Звання конандира: " <<items[i].rank_of_commander_brigade <<endl
                         << "Командир: " <<items[i].brigade_commander <<endl
                         <<"----------------------------------------------"<< endl;


                } else{

                    cout << "Такої військової частини не інсує" << endl;

                }

            }



            break;

        case 2:


            cout << "Введіть назву дивізії, військові частини(бригади) якої ви хочете дізнатися" << endl;
            cout <<"Наявні корпуси: "<<endl
            << items[0].division_name << endl;


            cin.ignore();
            getline(cin, name);

            for (int i = 0; i < items.size(); ++i) {

                if (items[i].division_name == name){
                    cout <<"Військова частина: "<< items[i].brigade_name<< endl
                         << "Звання конандира: " <<items[i].rank_of_commander_brigade <<endl
                         << "Командир: " <<items[i].brigade_commander <<endl
                         <<"----------------------------------------------"<< endl;


                } else{

                    cout << "Такої військової частини не інсує" << endl;

                }

            }


            break;

        case 0:

            break;
        default:
            cout << "Ви ввели неправильні дані" << endl;
            break;

    }

    system("pause");



};



/*-------------------------2-------------------------*/







#endif //COURSWORK_FUNCK_H
