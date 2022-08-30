#include <iostream>
#define valuta "€"

double getTotal(double prices[], int size);

int main(){

 std::string students[] = {"Petra", "Erwin", "Stefan"};
 char nummer = 'A';

 double prices [] = {49.44, 12.98, 998.09, 33.46}; //array naar een functie, alleen de naam en het wordt een pointer
 int size = sizeof(prices) / sizeof(prices[0]);
 double total = getTotal(prices, size);

 std::cout << valuta << total << "\n";

 //std::cout << sizeof(students) / sizeof(std::string) << " elements\n"; 

 /*for (int  i = 0; i < sizeof(students)/sizeof(std::string); i++)     
 {
    std::cout << students[i] << "\n"; 
 } */

 for (std::string naam : students){
    
    std::cout << naam << "\n";
    
    /* foreach loop*/
 }
     return 0;

 }

 double getTotal(double prices[], int size){
    double total = 0;
    for (int i = 0; i < size; i++)
    {
       total += prices[i]; 
    }
    return total;
 }