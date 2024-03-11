//
// Created by jmrob on 3/10/2024.
//

#ifndef GROBART_LAB15_CAT_H
#define GROBART_LAB15_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    Cat(int id, string name, string shelter);

    void makeSound() const override;
};


#endif //GROBART_LAB15_CAT_H
