#include <iostream>

//multidimensional arrays

int main(){

    std::string cars[][3] = {{"911", "Cayenne", "Pannamera"},
                            {"Golf", "Passat", "Touran"},
                            {"Astra", "Meriva", "Insignia"}};

    //om iteraties uit te voeren, nested loops

    int row = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < row; i++){     //geeft de adressen van de 3 rijen, nog een for loop voor de inhoud
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }
    


    return 0;
}