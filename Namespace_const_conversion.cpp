#include <iostream>
#include <vector>

namespace first{  //om dezelfde variable naam te gebruiken met verschillende waardes
int x = 1;

namespace second{
int x = 2;
}
}

int main() {

const double PI = 3.14159;   //constante variable, kenbaar maken met hoofdletters
double radius = 10;
double circumference = 2 * PI * radius;

std::cout << circumference <<" cm" << "\n";

int x = 0;

std::cout << x << "\n";  //geeft local x
std::cout << first::x << "\n"; //geeft waarde x van eerste namespace

//prefix voor variable kan weggelaten worden door: 

using namespace first;
using std::cout; //std typen is niet meer nodig

cout << "Hallo \n";
cout << "Doei" << "\n";

/* typedif om een lange datatype een alias te geven, vaak eindigend op _t
Inmiddels vervangen door 'using' */

//typedef int number_t;

using number_t = int;

number_t age  = 80;

std::cout << age << "\n";

//type conversion implicit en explicit

double getal = 3.14;

cout << (int) getal << "\n";

int correct = 8;
int total = 10;
double score = correct / (double)total * 100;

cout << score << "%";

return 0;
}



