#include<iostream>
using namespace std;

int main()
{
    double price = 99.99;
    float interestRate = 3.45f; // f needs to written in to store floating point value.
    // C++ Default stores a <double> value if the data contains decimal.
    
    auto fileSize = 9000L;  // Same for the case of long value. 'L' needs to written at the end.
    auto letter = 'a';  // Char
    auto isValid = true;    // Boolean
    // "auto" auto-detects the data type, in a way that we don't even need to specify the datetype,
    // We can just write auto and follow the correct way  writing a datatype and auto will auto detect its type.
    
    return 0;
}