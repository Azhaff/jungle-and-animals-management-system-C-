#pragma once
#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class animal {
private:
    string name;
    string species;
    int age;
    bool available;
public:
    bool member;
    animal();
    animal(string, string, int, bool);
    animal(const animal& obj);
    ~animal();
    bool checkAvailable();
    string checkName();
    string checkSpecies();
    int checkAge();
    void setName(string);
    void setSpecies(string);
    void setAge(int);
    void setAvailable();
    void setUnavailable();
    void DisplayInfo();
};

#endif


