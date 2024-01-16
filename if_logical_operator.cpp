// && (and) -> check if two conditions are true
// || (or)-> check if at least one of two conditions is true
// ！ -> reverses the logical state of its operand

#include <iostream>

int main(){

    double temp;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temp;

    if(temp < 15 || temp > 30){
        std::cout << "The temperature is bad!\n";
    }
    else{
        std::cout << "The temperature is good!\n";
    }


    bool sunny = true;

    if(sunny){ // it means sunny = true
        std::cout << "It is a sunny day.";
    }
    else if(!sunny){ // it means sunny = false
        std::cout << "It is a cloudy day.";
    }


    if(temp == 25 && sunny){
        std::cout << "\nIt is a super nice day!!";
    }

    return 0;
}
