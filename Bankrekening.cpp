#include <iostream>
#include <iomanip>
#define valut_two "€"

void showbalance(double balance, std::string valuta);
double deposit();
double withdraw(double balance);

int main()
{ 
 
 double balance = 70;
 int choice = 0;

 do
 {
    std::cout << "Make your choice: \n";
    std::cout << "1. showbalance \n";
    std::cout << "2. deposit money \n";
    std::cout << "3. withdraw money \n";
    std::cout << "4. exit \n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1: showbalance(balance, valut_two);
                break;
        case 2: balance += deposit();
                showbalance(balance, valut_two);
                break;
        case 3: balance -= withdraw(balance);
                showbalance(balance, valut_two);
                break;
        case 4: std::cout << "Thank for visiting! \n";
                break;
        default: std::cout << "That's not a valid input!";
    }
 
 }while(choice != 4);

 return 0;
}

void showbalance(double balance, std::string valuta){
   
    std::cout << "Your current balance: " << std::setprecision(2) << std::fixed << valuta << balance <<  "\n";
    // printf("Your current balance: %s %.3f\n",valuta.c_str(), balance);
    
}
double deposit(){

    double amount = 0;
    std::cout << "Enter deposit amount: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else{
        std::cout << "No valid amount \n";
        return 0;
    }
    
}
double withdraw(double balance) {

    double amount = 0;
    std::cout << "How much would you like to withdraw?: ";
    std::cin >> amount;

    if(amount > balance){ 
        std::cout << "insufficient balance \n"; 
        return 0;
    }
    else if (amount < 0){

        std::cout << "Thats not a valid amount\n";
        return 0;
    }
    else{

        return amount;
    }

}
   
