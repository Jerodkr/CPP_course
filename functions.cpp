#include <iostream>
void happy_birthday(std::string name, int age);
void happy_birthday(std::string name, int age, std::string birthplace);

//local variables: declared in a function
//global variables: declared outside a function , oproepen door ::voor de variabele

int main()
{

 std::string name;
 int age; 
 std::string birthplace;

 std::cout << "What is your name?: ";
 std::getline(std::cin, name);

 std::cout << "What is your age?: ";
 std::cin >> age;

 std::cout << "Where are you born?: ";
 std::cin >> birthplace;

happy_birthday(name, age);       //argumenten invullen uit de mainfunctie

 return 0;
 }     

void happy_birthday(std::string name, int age) {    //parameters invullen in de haken, deze moeten overeenkomen met de data uit main. 

        
            std::cout << "Happy birthdat to " << name << "\n";
            std::cout << "Happy birthdat to " << name << "\n";
            std::cout << "He is now " << age << " years old! \n";
        
        
        //return geeft een waarde terug op de plek waar de functie wordt opgehaald. Data type van return moet overeenkomen met functie
};

void happy_birthday(std::string name, int age, std::string birthplace) {
            std::cout << "Happy birthdat to " << name << "\n";
            std::cout << "Happy birthdat to " << name << "\n";
            std::cout << "He is now " << age << " years old! \n";
            std::cout << "He is born in" << birthplace << "\n";
};
