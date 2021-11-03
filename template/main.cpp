#include <iostream>
#include "Cat.h"

int
main (void)
{
    Cat cat = Cat();

    std::cout << "\nYou've created a new cat.\n\n";

    while (!cat.is_happy())
    {
        std::cout << "Playing with cat to make it happy\n";
        cat.play();
    }

    std::cout << "Cat is happy\n\n";

    while (cat.is_hungry())
    {
        std::cout << "Cat is hungry. Feeding cat\n";
        cat.feed();
    }

    std::cout << "Cat is full\n\n";

    while (cat.is_sleepy())
    {
        std::cout << "Cat is sleeping\n";
        cat.sleep();
    }

    return 0;
}