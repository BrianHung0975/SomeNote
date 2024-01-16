// Some string methods

#include <iostream>

int main(){

    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    if(name.length() >  15){
        std::cout << "Username needs to within 15 characters.";
    }
    else{
        std::cout << "Welcome, " << name;
    }

    return 0;
}