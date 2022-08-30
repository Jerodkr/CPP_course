#include <iostream>
#include <ctime>

int main()
{

 int num;
 int guess;
 int tries;
 
 srand(time(NULL));
 num = (rand() % 100) + 1;

 std::cout << "********** Number guessing game************** \n";
 
    do
    {
        std::cout << "Enter a guess between 0 - 100: ";
        std::cin >> guess;
        tries ++;

        if(guess > num) {
            std::cout << "Too high! \n";    
        }

        else if(guess < num) {
            std::cout << "Too low! \n";
        }

        else{
            std::cout << "Correct, you win! # number of tries: " << tries << "\n";
    
        }

    } while (guess != num);
    
 std::cout << "***********************************************";

srand(time(0));

 int randNUM = rand() % 5 + 1;
 
  switch(randNUM) {
        case 1: std::cout << "You win a dikke drol!" << "\n";
            break;
        case 2: std::cout << "You win a bamischijf!" << "\n";
            break;
        case 3: std::cout << "You win a hond!" << "\n";
            break;
        case 4: std::cout << "You win a torpedo!" << "\n";
            break;
        case 5: std::cout << "You win a hoop stront!" << "\n";
            break;
      }

 return 0;

 }