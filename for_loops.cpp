#include <iostream>


//break: break out of a loop, eerder gezien in switch statement
//continue: skip de huidige iteratie

int main(){

for(int i = 1; i <= 20; i++ ) {

    if(i == 13) {

        continue;
    }

std::cout << i << "\n";

}

return 0;

//nested loops zijn (for of while) loops in een loop

}