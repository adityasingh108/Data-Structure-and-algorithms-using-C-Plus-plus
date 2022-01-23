#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Creating variables
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // Character
    bool myBoolean = true;     // Boolean
    string myString = "Hello"; // String

    // Print variable valuesaa
    cout << "int: " << sizeof(myNum) << "\n";
    cout << "float: " << sizeof(myFloatNum) << "\n";
    cout << "double: " << sizeof(myDoubleNum) << "\n";
    cout << "char: " << sizeof(myLetter) << "\n";
    cout << "bool: " << sizeof(myBoolean) << "\n";
    cout << "string: " << sizeof(myString) << "\n";

    return 0;
}