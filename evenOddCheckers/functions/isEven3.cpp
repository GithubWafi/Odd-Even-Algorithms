#include "../inputOutputer.h"


bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    if ((float) number / 2 == (int)((float) number / 2))
    {
        return true;
    }

    return false;
}
