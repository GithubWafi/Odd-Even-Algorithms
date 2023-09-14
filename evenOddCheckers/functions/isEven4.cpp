#include "../inputOutputer.h"
#include <cstdlib>

bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    bool even = true;
    for (int counter = 0; counter < abs(number); counter++)
    {
        even = !even;
    }

    return even;
}
