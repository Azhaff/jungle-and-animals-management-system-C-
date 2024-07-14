#include <iostream>
#include <string>
#include "animal.h"
#include "jungle.h"
using namespace std;

animal::animal() {
    name = "";
    species = "";
    age = 0;
    available = false;
}

animal::animal(string name, string species, int age, bool available) {
    this->name = name;
    this->species = species;
    this->age = age;
    this->available = available;
}

animal::animal(const animal& obj) {
    name = obj.name;
    species = obj.species;
    age = obj.age;
    available = obj.available;
}

animal::~animal() {
}

bool animal::checkAvailable() {
    return available;
}

void animal::setAvailable() {
    available = true;
}

void animal::setUnavailable() {
    available = false;
}

void animal::DisplayInfo() {
    cout << "Name: " << name << endl;
    cout << "Species: " << species << endl;
    cout << "Age: " << age << endl;
    cout << "Available: " << available << endl;
    cout << endl;
}

string animal::checkName() {
    return name;
}

int animal::checkAge() {
    return age;
}

string animal::checkSpecies() {
    return species;
}

void animal::setName(string name) {
    this->name = name;
}

void animal::setSpecies(string species) {
    this->species = species;
}

void animal::setAge(int age) {
    this->age = age;
}
