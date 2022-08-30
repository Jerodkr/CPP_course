#include <iostream> 
#include <vector>
#include <cmath>
using std::cout;

int main(){

std::string name; 
int age;

cout << "Whats your full name?: ";
//std::cin >> name; input accepteert geen spaties, gebruik getline functie
std::getline(std::cin, name);


cout << "Whats your age?: ";
std::cin >> age;

cout << "Hello " << name << '\n';
cout << "You are " << age << " years old." << "\n";


double x;
double y;
double z;

//z = std::max(x, y); geeft max waarde van de twee
//z= std::min(y, x); geeft min waarde
//z = pow(2, 9); machten, twee tot de macht 9
//z = sqrt(88); wortel

cout << "What's side x?: ";
std::cin >> x;

cout << "What's side y?: ";
std::cin >> y;

x = pow(x, 2);
y = pow(y, 2);
z = sqrt(x + y);

//z =sqrt(pow(x,2 + pow(y,2)); in het kort

cout << "Side z: " << z; 


cout << z;

return 0;

}
