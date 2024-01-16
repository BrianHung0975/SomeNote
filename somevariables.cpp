#include <iostream> 

int main(){

    // int -> It can only store integer
    int age = 18;
    int year = 2024;
    int month = 1;
     
    // double -> It can store number including decimal
    double GPA = 4.2;
    double minutes = 2.5;
    double days = 14;

    // char ->  Single character
        // it neea to use ' ', but not " ". And only one character.
    char grade = 'A';
    char title = 'H';
    char currency = '$';

    // bool -> boolean (true or false)
    bool isBeginner = true;
    bool isTeacher = false;
    bool isStudent = true;

    // string -> objects that represents a sequence of text
    std::string name = "BrianHung";
    std::string address = "365 street";
    std::string quote = "Knowledge is Power";

    std::cout << "Hello, my name is " << name << ". My address is " << address << ".";
    std::cout << "\n" << "There is my favorite quote '" << quote << ".'";

    return 0;
}