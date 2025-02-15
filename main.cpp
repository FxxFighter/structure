#include <iostream>
using namespace std;

struct Animal {
    char name[30];
    char species[30];
    int age;
    double weight;
    char diet[20];
};

int main() {
    Animal zoo[] = {
        {"Leo", "Lion", 5, 190.5, "Carnivore"},
        {"gondebak", "Elephant", 10, 5400.0, "Herbivore"},
        {"vafa", "Dog", 3, 25.0, "Omnivore"},
        {"machook", "Cat", 2, 4.8, "Carnivore"},
        {"abo saleh", "Parrot", 4, 0.9, "Herbivore"}
    };

    int numAnimals = sizeof(zoo) / sizeof(zoo[0]);

    for (int i = 0; i < numAnimals; i++) {
        cout << "Name: " << zoo[i].name << ", Species: " << zoo[i].species
             << ", Age: " << zoo[i].age << ", Weight: " << zoo[i].weight << " kg, Diet: " << zoo[i].diet << endl;
    }

    return 0;
}
