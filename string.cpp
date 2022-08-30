#include <iostream>

/* verder heb je nog:

-empty, voor lege waardes om te zien of de gebruiker iets heeft ingevuld
-clear, verwijderd de waarde van de string
-append, voegt een waarde toe aan de string
-.at, geeft het karakter binnen de haakjes uit de string
-.insert, voegt een karakter toe in de string (0, "@")
-.find, geeft de index van een karakter
-.erase, deel van een string verwijderen, (0, 3) */

int main() {

 std::string name;

 std::cout << "Enter your name: ";
 std::getline(std::cin, name);

 if(name.length() > 12) {

std::cout << "Your name is fk long";
 }
else{

    std::cout << "Welcome " << name;
}




    return 0;
}