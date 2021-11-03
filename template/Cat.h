#ifndef CAT_H
#define CAT_H

#include <stdbool.h>

class Cat
{
    private:
        int hunger;
        int energy;
        int mood;

        void meow();
        void purr();
    public:
        Cat();

        void feed();
        void sleep();
        void play();

        bool is_hungry();
        bool is_sleepy();
        bool is_happy();
};

#endif