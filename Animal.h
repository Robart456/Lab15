//
// Created by jmrob on 3/10/2024.
//

#ifndef GROBART_LAB15_ANIMAL_H
#define GROBART_LAB15_ANIMAL_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal {
protected:
    int id;
    string name;
    string shelter;
public:
    Animal();
    Animal(int id, string name, string shelter);
    virtual ~Animal() = default;
    int getId() const;
    string getName() const;
    string getShelter() const;
    void setId(int id);
    void setName(const string &name);
    void setShelter(const string &shelter);
    virtual void makeSound() const = 0;
};

#endif //GROBART_LAB15_ANIMAL_H
