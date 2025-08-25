//
// Created by Daniel A on 8/25/25
// StringWarmup.cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string myStringObject = "abcdefghi";
    // Output my string object
    cout << myStringObject <<endl;
    cout << "The value of my string object is: " << myStringObject.size() << endl;
    // use method from string library to find the length
    cout << "The length of myStringObject is: " << myStringObject.length() << endl;
    // create a variable that holds the length of the string
    int lengthofString = myStringObject.length();

    int lengthOfMyString = myStringObject.length();

    cout << "\n The length of myStringObject is: " << myStringObject[1] << endl;
    cout << "test1.at(3):" << "test1.at(3): " << myStringObject.at(3) << endl;

    myStringObject[2] = 'C';
    cout << myStringObject <<endl;

    myStringObject[2] ='C';
    cout << myStringObject <<endl;
    myStringObject = myStringObject + "jklmonp";
    cout << myStringObject <<endl;




return 0;


}