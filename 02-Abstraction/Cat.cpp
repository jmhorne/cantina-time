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

void Cat :: feed()
{
    this->hunger -= 20;

    this->meow();
}

void Cat :: sleep()
{
    this->energy += 20;

    this->purr();
}

void Cat :: play()
{
    this->mood += 20;
    this->hunger += 20;
    this->energy -= 20;

    this->meow();
}

bool Cat :: is_hungry()
{
    return this->hunger > 50;
}

bool Cat :: is_sleepy()
{
    return this->energy < 50;
}

bool Cat :: is_happy()
{
    return this->mood > 50;
}