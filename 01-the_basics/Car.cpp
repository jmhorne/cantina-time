#include "Car.h"

Car :: Car()
{
    this->mileage = 0;
}

Car :: Car(int mileage)
{
    this->mileage = mileage;
}

int Car :: get_mileage()
{
    return this->mileage;
}