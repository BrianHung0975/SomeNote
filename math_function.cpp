#include <iostream>
#include <cmath>

int main(){

    double x = 3.14;
    double y = 6;
    double z;

    // max -> find out the max value in variables
    z = std::max(x, y);
    std::cout << z << '\n';

    // min -> find out the min value in variables
    z = std::min(x,y);
    std::cout << z << '\n';

    // pow -> power
    z = std::pow(3,2); // It should be 9
    std::cout << z << '\n';

    // sqrt -> square root
    z = std::sqrt(4); // It should be 2
    std::cout << z << '\n';

    // abs -> absolute
    z = std::abs(-6);
    std::cout << z << '\n'; // It should be 6

    // round -> 四捨五入
    z = std::round(x);
    std::cout << z << '\n';

    // ceil -> 無條件進位
    z = std::ceil(5.2);
    std::cout << z << '\n';

    // floor -> 無條件捨去
    z = std::floor(x);
    std::cout << z << '\n';
    
    return 0;
}

