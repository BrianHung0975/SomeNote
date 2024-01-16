#include <iostream> 
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "******** CALCULATOR ********\n";
    std::cout << "Enter number1: ";
    std::cin >> num1;
    std::cout << "Enter a operation (+ - * /):  ";
    std::cin >> op;
    std::cout << "Enter number2: ";
    std::cin >> num2;


    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "\nRESULT: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "\nRESULT: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "\nRESULT: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "\nRESULT: " << result << '\n';
            break;
        default:
            std::cout << "\nSomething wrong. Try again.\n";
    }

    std::cout << "****************************";

    return 0;
}