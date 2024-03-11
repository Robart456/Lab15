#include <iostream>
#include "Horse.h"
#include "Cat.h"

using std::cout;
using std::endl;

int main() {
    Horse horse1(1, "Mustang", "Prairie");
    Cat cat1(2, "Whiskers", "House");

    horse1.makeSound();
    cat1.makeSound();

    return 0;
}
