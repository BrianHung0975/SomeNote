/*
type conversion -> conversion a value of one data type to another
                Implicit = automatic
                Explicit = Precede value with new data type（int）
*/

#include <iostream>

int main(){
    double pi = 3.14;
    std::cout << pi << '\n';
    std::cout << (int)pi << '\n';

    int correct = 6;
    int question = 10;
    double score = correct / question * 100; // Because 'correct / question' is using 'int' calculate
    std::cout << score << "%\n";

    double Score = correct / (double)question * 100; // So, it need to be convert into 'double' calculate
    std::cout << Score << "%\n";

    double SCore = (double)correct / question * 100; // Two of these are the same
    std::cout << Score << "%";

    return 0;
}