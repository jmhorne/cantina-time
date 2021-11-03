#include <iostream>
#include "Puma.h"

using namespace std;

int
main (void)
{
    Puma puma = Puma();

    cout << "\nPuma's weight: " << puma.get_weight() << "\n\n";

    // cout << "Playing with Puma\n";

    // while (!puma.is_happy())
    // {
    //     puma.play();
    // }

    cout << "is Puma happy? ";

    if (puma.is_happy())
    {
        cout << "Yes.\n";
    }
    else
    {
        cout << "NO! Better play with her\n";
        
        while (!puma.is_happy())
        {
            puma.play();
        }

    }

    if (puma.is_hungry())
    {
        cout << "\nFeeding puma\n";
        puma.feed();
    }
    else
    {
        cout << "\nPuma is not hungry\n";
    }

    if (puma.is_sleepy())
    {
        cout << "\nPuma is sleeping\n";
        puma.sleep();
    }
    else
    {
        cout << "\nPuma is not sleepy\n";
    }

    return 0;
}