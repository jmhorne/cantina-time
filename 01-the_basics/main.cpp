#include <iostream>
#include "Car.h"

using namespace std;

int
main (void)
{
    Car car1 = Car();
    Car car2 = Car(20);

    cout << "Car 1 mileage:" << car1.get_mileage() << endl;
    cout << "Car 2 mileage:" << car2.get_mileage() << endl;

    return 0;
}