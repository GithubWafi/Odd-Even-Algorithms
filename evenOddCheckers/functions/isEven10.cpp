#include "../inputOutputer.h"


bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    struct leastSignificantBit{
        unsigned bit : 1;
    };

    leastSignificantBit isOdd;
    isOdd.bit = number;

    return !(isOdd.bit);
}
