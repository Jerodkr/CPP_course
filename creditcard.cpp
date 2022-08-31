#include <iostream>

int getdigit(const int number);
int sumodddigit(const std::string cardnumber);
int sumevendigits(const std::string cardnumber);

int main(){

    std::string cardnumber;
    int result = 0;

    std::cout << "Enter a card number: # ";
    std::cin >> cardnumber;

    result = sumodddigit(cardnumber) + sumevendigits(cardnumber);

    if(result % 10 == 0){

        std::cout << cardnumber << " is valid!";
        
    }
    else{

        std::cout << cardnumber << " is not valid!";
    }



    return 0;
}

int getdigit(const int number){
    //18 % 10 = 8 + (18 / 10 = 1 % 10 = 1) = 9
    return number % 10 + (number / 10 % 10);
}
int sumodddigit(const std::string cardnumber){
    int numeven = 0;
    
    for(int i = cardnumber.size() - 1; i >= 0; i-=2){
        numeven = cardnumber[i] - '0';
    }

    return numeven;

    return 0;
}
int sumevendigits(const std::string cardnumber){
    int numeven = 0;
    
    for(int i = cardnumber.size() - 2; i >= 0; i-=2){
        numeven = getdigit((cardnumber[i] - '0') * 2);
    }

    return numeven;
}