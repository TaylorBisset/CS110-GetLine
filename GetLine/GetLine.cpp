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

    cout << setfill('~') << setw(5) << 321 << endl; // fills empty spaces with ~

    cout << setprecision(1) << 5.678 << endl; // outputs 5.7

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
