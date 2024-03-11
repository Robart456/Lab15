#include "Horse.h"

Horse::Horse() {}

Horse::Horse(int id, string name, string shelter) : Animal(id, name, shelter) {}

void Horse::makeSound() const {
    cout << "Neigh Neigh!" << endl;
}
