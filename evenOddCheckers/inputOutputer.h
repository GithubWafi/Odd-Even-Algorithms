#ifndef INPUTOUTPUTER_H_INCLUDED
#define INPUTOUTPUTER_H_INCLUDED

#include <iostream>

int inputOutputer(bool (*isEven)(int))
{
    int number;

    std::cout << "EVEN OR ODD CHECKER\n\n"
        << "Enter a whole number: ";
    std::cin >> number;

    std::string evenOrOdd = isEven(number) ? "EVEN" : "ODD";
    std::cout << "\n\nThe given number was: " << evenOrOdd << "\n\n";

    return 0;
}


#endif // INPUTOUTPUTER_H_INCLUDED
