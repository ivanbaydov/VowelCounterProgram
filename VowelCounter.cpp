//---------------------------------------------------------------------------------
//
// Title:          Vowel Counter
// Lab Course:     ITCS 2530 V0801 2021FA
// Author:         Ivan Baydov
// Date:           11/14/2021
//---------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// The Column for the Astrickts and Periods.
const int COLFMT1 = 50; 


int main(int argc, char* argv[])
{
    // Declare int Variables to count up all the Vowels except for B,C and D.
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int I = 0;
    int O = 0;
    int U = 0;

    ifstream inputFile;
    // Displaying the Titel of the program
    cout << setw(COLFMT1) << setfill('*') << "*" << endl
        << setw(7) << "*" << " Welcome to my Letter Count Program " << setw(7) << "*" << endl
        << setw(COLFMT1) << "*" << endl;

    // Argument validation
    if (argc < 2)
    {
        cout << "No input arguments." << endl;
        return 1;
    }

    inputFile.open(argv[1]);
    if (!inputFile.is_open())
    {
        cout << "Error with file name." << endl;
        return 1;
    }

    cout << inputFile.get();

    // This while loop will count the each letter in the document, when it passes through an A it would count that as 1 so on for the other vowels, except for B,C and D.
    while (inputFile.good())
    {
        switch (toupper(inputFile.get()))
        {
            case 'A':
                A = A + 1;
                break;
            case 'B':
                B = B + 1;
                break;
            case 'C':
                C = C + 1;
                break;
            case 'D':
                D = D + 1;
                break;
            case 'E':
                E = E + 1;
                break;
            case 'I':
                I = I + 1;
                break;
            case 'O':
                O = O + 1;
                break;
            case 'U':
                U = U + 1;
                break;
        }
    }

    // Displays the output of the Vowles and the total amount of Vowels counted.
    // Also Displays the Three diffrent letters.
    inputFile.close();
    cout << setfill('.') << setw(COLFMT1) << "The number of A's: " << A << endl
         << setw(COLFMT1 << "The number of B's: " << B << endl
         << setw(COLFMT1 << "The number of C's: " << C << endl
         << setw(COLFMT1 << "The number of D's: " << D << endl
         << setw(COLFMT1 << "The number of E's: " << E << endl
         << setw(COLFMT1 << "The number of I's:" << I << endl
         << setw(COLFMT1 << "The number of O's:" << O << endl
         << setw(COLFMT1 << "The number of U's:" << U << endl
         << setw(COLFMT1 << "The vowel count is: " << A + E + I + O +U << endl;
    return 0;
}
