#include "../inputOutputer.h"
#include <string>

bool isEven(int number);


int main()
{
    return inputOutputer(&isEven);
}


bool isEven(int number)
{
    std::string numberDividedByTwo = std::to_string((float) number / 2);

    int index = 0;
    bool isAfterDecimal = false;
    bool even = true;

    while (numberDividedByTwo[index] != '\0')
    {
        if (isAfterDecimal)
        {
            if (numberDividedByTwo[index] != '0')
            {
                even = false;
            }
        }
        else if (numberDividedByTwo[index] == '.')
        {
            isAfterDecimal = true;
        }

        index++;
    }

    return even;
}
