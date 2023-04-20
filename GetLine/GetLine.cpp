// GetLine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string fullName;

    // setw() by default, justifies to the right by number of spaces and characters in the argument

    cout << setw(10) << "Hello" << endl;

    cout << setw(30) << "Enter your full name: ";
    
    getline(cin, fullName);

    cout << setw(30) << "My name is " << fullName << endl;

    cout << setprecision(1) << 5.555 << endl;

    cout << fixed << setprecision(2) << 5.555 << endl;

    cout << setprecision(3) << 5.555 << endl;

    cout << 18 << hex << ' ' << 19 << ' ' << 20 << endl;
    // reset to decadecimal form hexadecimal
    cout << dec;

    cout << setfill('~') << setw(5) << 321 << endl << endl; // fills empty spaces with ~

    cout << "Begin Question sets" << endl << endl;
    // Question 1: Print 5.678 with 2 significant digits
    cout << "Question 1." << endl;
    cout << setprecision(1) << 5.678 << endl; // outputs 5.7

    // Question 2: Print 77.89578 to exactly 3 decimal places
    cout << "Question 2." << endl;
    cout << setprecision(3) << fixed << 77.89578 << endl; // outputs 77.896

    // Question 3: Print the number 100 with ten spaces
    cout << "Question 3." << endl;
    cout << setfill(' ') << setw(10) << 100 << endl; // outputs "          100"

    // Question 4: Print with ! instead of a space
    cout << "Question 4." << endl;
    cout << setfill('!') << setw(10) << 100 << endl;

    // Question 5: Print 56.9089 as dollars and cents
    cout << "Question 5." << endl;
    cout << "$" << setprecision(2) << fixed << 56.9089 << endl; // outputs $56.91

    // Question 6: Print 56.98089 as dollars and cents in a field of 10
    cout << "Question 6." << endl;
    cout << "$";
    cout << setfill(' ') << setw(10) << setprecision(2) << fixed << 56.9089 << endl; // outputs "$     56.91"

    // Question 7: Print 56.98089 as dollars and cents with 7 places in front of decimal byt pad with zeros
    cout << "Question 7." << endl;
    cout << "$";
    cout << setfill('0') << setw(10) << setprecision(2) << fixed << 56.9089 << endl; // outputs "$0000056.91"

    // Question 8: Print a string Fred with 15 places pad with spaces
    cout << "Question 8." << endl;
    cout << setfill(' ') << setw(15) << "Fred" << endl; // outputs "           Fred"

    // Question 9: Print string Fred with 15 places and left justified by the word Shaggy
    cout << "Question 9." << endl;
    cout << left << setw(15) << "Fred" << "Shaggy" << endl; //outputs "Fred           Shaggy"

    /* Question 10: collumns and rows lined up as follows:
              10.57         125.89        1001.00
             100.68          15.89          10.90
    */
    cout << "Question 10." << endl;
    cout << right << setprecision(2) << fixed;
    cout << setw(15) << 10.57;
    cout << setw(15) << 125.89;
    cout << setw(15) << 1001.00 << endl;

    cout << setw(15) << 100.68;
    cout << setw(15) << 15.89;
    cout << setw(15) << 10.90 << endl;

    /*
    This concludes the question set for stream manipulators
    */

    cout << endl << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
