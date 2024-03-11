//
// Created by jmrob on 3/10/2024.
//

#ifndef GROBART_LAB15_HORSE_H
#define GROBART_LAB15_HORSE_H

#include "Animal.h"

class Horse : public Animal {
public:
    Horse();
    Horse(int id, string name, string shelter);

    void makeSound() const override;
};

#endif //GROBART_LAB15_HORSE_H
