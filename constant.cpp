#include <iostream>

int main(){
    /*
    const -> Specify that a variable's value is constant 
    tells the compiler to prevent anything from modifying it 
    （read-only）
    */ 
   // The variable behind const usually uppercase (common naming)
   const double PI = 3.14159; // I don't want anyone change the value of PI
   double radius = 5;
   double circumference = 2 * PI * radius;
   std::cout << circumference << "cm ";

   const int LIGHT_SPEED = 299792458; 

   return 0;
}


