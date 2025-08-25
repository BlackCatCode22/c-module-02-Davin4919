//Reverseingastring.cpp
// Created by Daniel A on 8/25/2025.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "\n\n Welcome to My Reverse a String Program? \n\n";

// Creating a string to reverse different ways
    string myEasyToReverse = "A Long String To Reverse";

    // Part 1: use the reverse function from the library named algo

    string myEasyReversedStr;

    reverse(myEasyToReverse.begin(), myEasyToReverse.end());

    cout << "\n The String Before being reversed is: " << myEasyReversedStr;

    reverse (myEasyReversedStr.begin), myEasyReversedStr.end();

    cout << "\n my reverse string is: " << myEasyReversedStr;

//Part 2: use a for loop to swap characters

    for (int i=0; i<100; i++) {
        cout << "\n the value of i is " << i << endl;
     }
    return 0;
}