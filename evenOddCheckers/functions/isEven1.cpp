#include "../inputOutputer.h"


bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    return (number % 2 == 0);
}
