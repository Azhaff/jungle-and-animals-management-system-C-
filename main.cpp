#include <iostream>
#include <string>
#include "jungle.h"
#include "animal.h"

using namespace std;

Jungle jungle;

void displayAnimalInfo(animal animal) {
    animal.DisplayInfo();
}

void sortAnimalsbyCriteria(animal*& animals, int size, string criteria) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (criteria == "NAME") {
                if (animals[i].checkName() < animals[j].checkName()) {
                    animal temp = animals[i];
                    animals[i] = animals[j];
                    animals[j] = temp;
                }
            }
            else if (criteria == "SPECIES") {
                if (animals[i].checkSpecies() < animals[j].checkSpecies()) {
                    animal temp = animals[i];
                    animals[i] = animals[j];
                    animals[j] = temp;
                }
            }
            else if (criteria == "AGE") {
                if (animals[i].checkAge() < animals[j].checkAge()) {
                    animal temp = animals[i];
                    animals[i] = animals[j];
                    animals[j] = temp;
                }
            }

        }
    }
}

void intro() {
    string choice; string type;
    cout << "Welcome to Jungle & Animals Management System!" << endl;
    cout << "Please Select an Option: " << endl;
    cout << "1. Add New Animals to the Jungle!" << endl;
    cout << "2. Remove Animals from the Jungle!" << endl;
    cout << "3. Search for Animals by name, species or age!" << endl;
    cout << "4. Display all available animals in the Jungle!" << endl;
    cout << "5. Check the Total No. of Animals in the Jungle!" << endl;
    cout << "6. Quit Application!" << endl;
    cout << "Enter Option: ";
    cin >> choice;

    if (choice == "1") {
        string n1, species; int age;
        animal* temp = new animal();
        cout << endl;
        cout << "Enter Name: ";
        cin >> n1;
        cout << "Enter Species: ";
        cin >> species;
        cout << "Enter Age: ";
        cin >> age;
        temp->setAge(age);
        temp->setName(n1);
        temp->setSpecies(species);
        jungle.AddAnimal(*temp);
        sortAnimalsbyCriteria(jungle.animals, jungle.a_size, "NAME");
        cout << "Done!" << endl;
        delete temp;
        cout << endl;
        intro();
    }
    else if (choice == "2") {
        string n2; bool found = false;
        animal* temp = new animal();
        cout << endl;
        cout << "Enter Name of Animal (Removal): ";
        cin >> n2;
        for (int i = 0; i < jungle.a_size; i++) {
            if (jungle.animals[i].checkName() == n2) {
                found = true;
                temp = &jungle.animals[i];
            }
        }
        if (found) {
            jungle.RemoveAnimal(*temp);
            cout << "Done!" << endl;
        }
        else {
            cout << "Animal Not Found!" << endl;
            delete temp;
        }

        cout << endl;
        intro();
    }
    else if (choice == "3") {
        cout << endl;
        cout << "Select Search Option: " << endl;
        cout << "1. By Name!" << endl;
        cout << "2. By Age!" << endl;
        cout << "3. By Species!" << endl;
        cout << "Enter Option: ";
        cin >> type;

        if (type == "1") {
            string s1;
            cout << "Enter Search Name: ";
            cin >> s1;
            cout << endl;
            jungle.SearchbyName(s1);
        }
        if (type == "2") {
            int s2;
            cout << "Enter Search Age: ";
            cin >> s2;
            cout << endl;
            jungle.SearchbyAge(s2);
        }
        if (type == "3") {
            string s3;
            cout << "Enter Search Species: ";
            cin >> s3;
            cout << endl;
            jungle.SearchbySpecies(s3);
        }
        cout << endl;
        intro();
    }
    else if (choice == "4") {
        cout << endl;
        cout << "List of Animals: " << endl;
        cout << endl;
        jungle.DisplayAnimals();
        cout << endl;
        intro();
    }
    else if (choice == "5") {
        cout << endl;
        jungle.DisplayTotal();
        cout << endl;
        intro();
    }
    else {
        exit(0);
    }
}

int main()
{
    intro();
    return 0;
}
