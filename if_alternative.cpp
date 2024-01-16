/*
    ？：(ternary operator) -> replacement to an if/else statement
                              condition ? expression1 : expression2；
*/

#include <iostream>


int main(){

    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    grade >= 60 ? std::cout << "You PASS!!" : std::cout << "You FALSE!!";
    /* equals to this code
    
        if(grade >= 60){
            std::cout << "You PASS!!";
        }
        else{
            std::cout << "You FALSE!!";
        }
    */

    return 0;
}


int main(){

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";
    number % 2 ? std::cout << "Odd" : std::cout << "Even"; // The same

    return 0;
}
