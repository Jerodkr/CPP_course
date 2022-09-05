#include <iostream>
#define N 9
using namespace std;

void printgrid(int arr[N][N]);

bool isSafe(int grid[N][N], int row,
                       int col, int num) {
    //zelfde nummer in een rij
    for (int x = 0; x <= 8; x++)
        if (grid[row][x] == num)
            return false;
    //zelfde nummer in een kolom
    for (int x = 0; x <= 8; x++)
        if (grid[x][col] == num)
            return false;
    //zelfde nummer in een blok
    int startRow = row - row % 3,
            startCol = col - col % 3;
   
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j +
                            startCol] == num)
                return false;
 
    return true;
}
 
bool solveSudoku(int grid[N][N], int row, int col)
{
       if (row == N - 1 && col == N)
        return true;
 
    //einde van de rij, 9e kolom. Door naar de volgende rij
    if (col == N) {
        row++;
        col = 0;
    }
   
    //check of hier al een getal staat, zo ja volgende kolom. 
    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);
 
    for (int num = 1; num <= N; num++)
    {
         
        //checken welk getal past
        if (isSafe(grid, row, col, num))
        {
             
            grid[row][col] = num;
           
            //  volgende kolom
            if (solveSudoku(grid, row, col + 1))
                return true;
        }
       
        //verwijderen van verkeerde nummer, opnieuw.
        grid[row][col] = 0;
    }
    return false;
}

int main() {

    int grid[N][N] = {{7, 0, 1, 0, 0, 3, 6, 0, 0},
                      {0, 6, 8, 0, 1, 5, 0, 0, 3},
                      {3, 2, 0, 0, 0, 7, 0, 0, 0},
                      {0, 5, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 8},
                      {0, 0, 0, 0, 0, 0, 9, 0, 0},
                      {0, 1, 0, 0, 7, 9, 0, 2, 0},
                      {4, 0, 0, 6, 2, 0, 7, 5, 0},
                      {0, 7, 0, 0, 5, 0, 8, 0, 0}};
   

 if (solveSudoku(grid, 0, 0))
     printgrid(grid);
 else
        cout << "no solution  exists " << "\n";
 
    return 0;

 return 0;
} 
void printgrid(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}





    