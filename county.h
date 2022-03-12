//
// Created by Сергій on 3/8/2022.
//
#include "libraries.h"


#ifndef COURSWORK_COUNTY_H
#define COURSWORK_COUNTY_H


/*Округ*/
class County {
public:
    /*Округ*/
    string county_name; string rank_of_commander_county  ;string county_commander;

    /*Армія*/
    string army_name;

    /*Корпус*/
    string corpus_name; string rank_of_commander_corpus; string corpus_commander;

    /*Дивізія*/
    string division_name;  string rank_of_commander_division; string division_commander;

    /*Бригада*/
    string brigade_name; string rank_of_commander_brigade;string brigade_commander;

    /*Батальйон*/
    string battalion_name; string rank_of_commander_battalion; string battalion_commander;

    /*Рота*/
    string company_name; string rank_of_commander_company; string company_commander;

    /*Взвод*/
    string platoon_name; string rank_of_commander_platoon; string platoon_commander;

    /*Відділення*/
    string branch_name; string rank_of_commander_branch; string branch_commander;
    int number_of_people;

};


#endif //COURSWORK_COUNTY_H
