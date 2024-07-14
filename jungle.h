#pragma once
#include <iostream>
#include <string>
#include "animal.h"

    using namespace std;

#ifndef JUNGLE_H
#define JUNGLE_H

    class Jungle {
    public:
        animal* animals;
        int a_size;
        Jungle();
        ~Jungle();
        void AddAnimal(animal);
        void RemoveAnimal(animal);
        void SearchbyName(string);
        void SearchbyAge(int);
        void SearchbySpecies(string);
        void DisplayAnimals();
        void DisplayTotal();
        //void sortAnimalsbyCriteria(animal*&, int, string);
    };

#endif



