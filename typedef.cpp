/*
typedef -> reserved keyword used to create an additional（alias）for another data type. Like nickname.
           New identifier for an existing type.
           Helps with readability and reduces typos Use when there is a clear benefit.
           Replaced with 'using = name'
*/

#include <iostream>

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string; // Replace with 'using'
using number_t = int; // nickname_t is a common naming

int main(){
    text_t name = "BrianHung";
    number_t age = 18;

    std::cout << "My name is " << name << ". I'm " << age << " years old.";
    
    return 0;
}