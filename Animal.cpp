#include "Animal.h"

Animal::Animal() : id(0), name("Unknown"), shelter("None") {}

Animal::Animal(int id, string name, string shelter) : id(id), name(name), shelter(shelter) {}

int Animal::getId() const {
    return id;
}
string Animal::getName() const {
    return name;
}

string Animal::getShelter() const {
    return shelter;
}

void Animal::setId(int id) {
    this->id = id;
}

void Animal::setName(const string &name) {
    this->name = name;
}

void Animal::setShelter(const string &shelter) {
    this->shelter = shelter;
}
