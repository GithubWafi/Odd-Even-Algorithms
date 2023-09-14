#include "../inputOutputer.h"
#include <cmath>


bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    if ( ( (float) number / 2 ) == floor((float) number / 2) )
    {
        return 1;
    }

    return 0;
}
