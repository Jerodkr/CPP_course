#include <iostream>

int main(){

int number;

/* std::cout << "Enter a positive number: ";     Deze code blijft zich herhalen tot dat er een positief nummer wordt ingevoerd. 
   std::cin >> number;

while (number < 0)
{
    std::cout << "Enter a positive number: ";
    std::cin >> number;
}

std::cout << number;


    return 0;
} */

do{
    std::cout << "Enter a positive number: ";
    std::cin >> number;
}while(number < 0);

std::cout << "Your number is: " << number;


return 0;
}
//Do while loops voeren eerst een stuk code uit en kijken daarna of het statement waar is. 