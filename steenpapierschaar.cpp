#include <iostream>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){

char player;
char computer;

player = getuserchoice();
std::cout << "Your choice: ";
showchoice(player);

computer = getcomputerchoice();
std::cout << "Computers choice: ";
showchoice(computer);

choosewinner(player, computer);
return 0;
}

char getuserchoice(){
    char player;
    
    do{    
    std::cout << "Steen-papier-schaar\n";
    std::cout << "*******************\n";
    std::cout << " 'R' for rock\n";
    std::cout << " 'P' for paper\n";
    std::cout << " 'S' for scissors\n";
    std::cin >> player;
    }while(tolower(player) != 'r' && tolower(player) != 'p' && tolower(player) != 's');

    return player;
}
char getcomputerchoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
        
    }

    return 0;
}
void showchoice(char choice){

    switch (choice)
    {
    case 'r': 
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }

}
void choosewinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer == 'r'){
                std::cout << "Gelijkspel\n";}
              else if(computer == 'p'){
                std::cout << "Verloren\n";}
              else {
                std::cout << "Gewonnen\n";}
        break;
    
    case 'p': if(computer == 'r'){
                std::cout << "Gewonnen\n";}
              else if(computer == 'p'){
                std::cout << "Gelijkspel\n";}
              else {
                std::cout << "Verloren\n";}
        break;

    case 's': if(computer == 'r'){
                std::cout << "Verloren\n";}
              else if(computer == 'p'){
                std::cout << "Gewonnen\n";}
              else {
                std::cout << "Gelijkspel\n";}
        break;
   }
}