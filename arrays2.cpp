#include <iostream>

//sorteren van een array
//fill() begin, eind en waarde

void sort(int array[], int size);

int main(){

 int array[] = {7, 4, 9, 12, 5, 8, 2};
 int size = sizeof(array)/sizeof(array[0]);

   sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    
    int temp;

    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size - i -1; j++){
            if(array[j] > array [j + 1]){  //door de > te veranderen naar <, van hoog naar laag
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

    }

}