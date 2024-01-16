#include <iostream>

int main(){
    double apple = 20;
    double app = 20;
    double pineapple = 20;
    double pine = 10;
    int pie =10;


    // +
    apple = apple + 2;
    apple+=2; // Two of these mean the same thing
    apple++; // This means apple + 1
    std::cout << apple << '\n';

    // -
    app = app - 2;
    app-=2; // Two of these mean the same thing
    app--; // This means app - 1
    std::cout << app << '\n';

    // *
    pineapple = pineapple * 2;
    pineapple*=2; // Two of these mean the same thing
    std::cout << pineapple << '\n';
    
    // / 
    pine = pine / 3;
    pine/=3; // Two of these mean the same thing
    std::cout << pine << '\n';

    // %
    int remainder = pie % 3; // Notice: pie need  to be 'int'
    std::cout << remainder << '\n';

    // C++ obey 四則運算規則
    int number = 6 + 4 - 9 * 2 / 3;
    int num = 6 + (4 - 9) * 2 / 5;

    std::cout << number << '\n';
    std::cout << num;
    
    return 0;
}
