#include <iostream>
#include "Cat.h"

Cat :: Cat()
{
    this->mood = 0;
    this->hunger = 0;
    this->energy = 100;
}

void Cat :: meow()
{
    std::cout << "Meow!\n\n";
}

void Cat :: purr()
{
    std::cout << "purrr\n\n";
}