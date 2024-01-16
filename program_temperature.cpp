#include <iostream>

int main()
{

    double ctemp;
    double ftemp;
    char unit;

    std::cout << "************ Temperature Convertor ************\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Choose the unit you want to convert to (C/F): ";
    std::cin >> unit;

    if(unit == 'c' || unit == 'C'){
        std::cout << "Enter temperature in F: ";
        std::cin >> ftemp;
        
        ctemp = (ftemp - 32) * 5 / 9;
        std::cout << ftemp << " degree F = " << ctemp << " degree C";
    }
    else if(unit == 'f' || unit == 'F'){
        std::cout << "Enter temperature in C: ";
        std::cin >> ctemp;
        
        ftemp = (9/5) * ctemp + 32;
        std::cout << ctemp << " degree C = " << ftemp << " degree F";
    }
    else{
        std::cout << "Please enter C or F";
    }

    std::cout << "\n**********************************************";
    return 0;
} 