#include "../inputOutputer.h"


bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    return !((number << ((sizeof(int) * 8) - 1)) >> ((sizeof(int) * 8) - 1));
}
