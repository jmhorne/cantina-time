#ifndef PUMA_H
#define PUMA_H

#include "Cat.h"

class Puma : public Cat
{
    private:
        int weight;
    
    public:
        Puma();

        int get_weight();
};

#endif