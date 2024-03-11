#include "Cat.h"

Cat::Cat() {}

Cat::Cat(int id, string name, string shelter) : Animal(id, name, shelter) {}

void Cat::makeSound() const {
    cout << "Meow Meow!" << endl;
}
