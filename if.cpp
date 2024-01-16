/*
    if -> do something if a condition is true. If not, then don't do it.
*/

#include <iostream>

int main(){

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // the larger age need to put ahead, so it can toggle
    if(age > 100){
        std::cout << "WOW, an old man.";
    }
    else if(age >= 18){
        std::cout << "You are a adault.";
    }
    else if(age < 0){
        std::cout << "Ha, Ha. It is not funny.";
    }
    else{
        std::cout << "You are not a adault.";
    }

    return 0;
}