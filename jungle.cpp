#include <iostream>
#include <string>
#include "jungle.h"
#include "animal.h"

using namespace std;

Jungle::Jungle() {
    this->a_size = 0;
    this->animals = new animal[a_size];
}

Jungle::~Jungle() {
    delete[] animals;
}

void Jungle::AddAnimal(animal Animal) {
    Animal.setAvailable();
    animal* temp = new animal[a_size + 1];
    for (int i = 0; i < a_size; i++) {
        temp[i] = animals[i];
    }
    temp[a_size] = Animal;
    a_size++;
    delete[] animals;
    animals = temp;
}

void Jungle::RemoveAnimal(animal Animal) {
    Animal.setUnavailable();
    animal* temp = new animal[a_size - 1];
    int j = 0;
    for (int i = 0; i < a_size; i++) {
        if (animals[i].checkName() != Animal.checkName()) {
            temp[j] = animals[i];
            j++;
        }
    }
    a_size--;
    delete[] animals;
    animals = temp;
}

void Jungle::DisplayAnimals() {
    for (int i = 0; i < a_size; i++) {
        animals[i].DisplayInfo();
    }
}

void Jungle::DisplayTotal() {
    cout << "Total Animals: " << a_size << endl;
}

void Jungle::SearchbyName(string name) {
    for (int k = 0; k < a_size; k++) {
        if (animals[k].checkName().find(name) != std::string::npos) {
            animals[k].DisplayInfo();
        }
    }
}

void Jungle::SearchbySpecies(string species) {
    for (int k = 0; k < a_size; k++) {
        if (animals[k].checkSpecies().find(species) != std::string::npos) {
            animals[k].DisplayInfo();
        }
    }
}

void Jungle::SearchbyAge(int age) {
    for (int k = 0; k < a_size; k++) {
        if (animals[k].checkAge() == age) {
            animals[k].DisplayInfo();
        }
    }
}

//Create a void function "sortAnimalsbyCriteria" with pointer array of animal class and integer size as parameters
//Take the pointer array reference to modify the original array Take the size of the array to know how many elements to sort
