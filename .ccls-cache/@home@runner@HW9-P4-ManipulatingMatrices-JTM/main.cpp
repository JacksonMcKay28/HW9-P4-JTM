// Title: Manipulating Matrices Handout, HW9 Problem 4
// Programmer: Jackson McKay
// Course: CSCI130-001 Dr. Mellenthin

#include <iostream>
#include <iomanip>

using namespace std;

void printMatrix_3col(int AirQuality_Index[][3], int n_rows, int n_columns);
int CountUnhealthySensitive( int matrix, );

int main() {

  const int n_rows = 10;
  const int n_columns = 3;
  int AirQuality_Index[n_rows][n_columns] = {
{50, 68,  58}, 
{58, 115, 78}, 
{62, 110, 81}, 
{66, 124, 110}, 
{64, 152, 121}, 
{46, 143, 90}, 
{46, 143, 90}, 
{25, 91,  91}, 
{27, 19,  59}, 
{17, 13,  27}};
  
// display values in MyMatrix
    cout << "AirQuality_Index contains: " << endl;
    printMatrix_3col(AirQuality_Index, n_rows, n_columns);

  
}

// function to print the matrix in a matrix with 3 columns
void printMatrix_3col(int AirQuality_Index[][3], int n_rows, int n_columns)
{
    int row, col;
    for (row = 0; row < n_rows; row++)
    {
        for(col = 0; col < n_columns; col++)
            cout << setw(6) << AirQuality_Index[row][col] << " ";
        
        cout << endl;    
    }
}

int CountUnhealthySensitive