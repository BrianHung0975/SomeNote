/*
    cout << -> output
    cin >> -> input
    getline -> input (accept whitespace in user input)
*/

#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout << "What's your name? ";
    std::cin >> name; // This cannot contian whitespace

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello, " << name << ".\n";
    std::cout << "You are " << age << " years old.";


    std::cout << "What's your name? ";
    std::getline(std::cin, name); // This can contian any whitespace
    
    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello, " << name << ".\n";
    std::cout << "You are " << age << " years old.";


    // How about start with cin then getline?
    // This will get some problem.
    std::cout << "How old are you? ";
    std::cin >> age; // Imagine that here is a '\n'.
    
    std::cout << "What's your name? "; // And it answer this.
    //std::getline(std::cin, name); 
    std::getline(std::cin >> std::ws, name); // Use this to solve this problem.
    // Actually, I still do't understand why.

    std::cout << "Hello, " << name << ".\n";
    std::cout << "You are " << age << " years old.";

    return 0;
}