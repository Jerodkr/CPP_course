#include <iostream>

int main(){

    std::string vragen[] = {"1. Wat is het liefste dier?: ",
                            "2. Wat voor dier is de Cock?: ",
                            "3. Welke taal is dit?: ",
                            "4. Wanneer heb ik mijn enkel gebroken?: ",
                            "5. Hoe oud wordt Erwin?: "};

    std::string keuzes[][4] = {{"A. Hond", "B. Rat", "C. Tommy de Tombadorret", "D. Fred"},
                                {"A. Torpedo", "B. Hond", "C. Kat", "D. Cocker Spaniel"},
                                {"A. C", "B. Python", "C. C++", "D. Java"},
                                {"A. Vorig jaar", "B. Mamma's verjaardag", "C. Nooit", "D. Volgend jaar"},
                                {"A. 50", "B. 48", "C. 55", "D. 80"}};

    char antwoorden[] = {'C', 'D', 'C', 'B', 'A'};

    int size = sizeof(vragen)/sizeof(vragen[0]);
    int gok;
    int score;

    for(int i = 0; i < size; i++){
            std::cout << "**************************************" << '\n';
            std::cout << vragen[i] << "\n";
            std::cout << "**************************************" << '\n';

        for(int j = 0; j < sizeof(keuzes[i])/sizeof(keuzes[i][0]); j++){
             std::cout << keuzes[i][j] << "\n";
                }

        std::cin >> gok;
        gok = toupper(gok);
        

        if(gok == antwoorden[i]){
            std::cout << "CORRECT!";
            score++;
        }
        else{

            std::cout << "False!\n";
            std::cout << "Correct answer: " << antwoorden[i] << '\n';
        }
    
        
    }
    

 return 0;


}