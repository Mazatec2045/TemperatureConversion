// Omar Vergara
// 02/18/2024
// Skill Assignment 2


#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std; 

int main() {

    // Variables
    double celsius; 
    double fahrenheit;

    // Temp in C
    cout << "Enter a temperature in Celsius : ";
    cin >> celsius;
    cout << endl; 
    
    // C to F formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Temp Conversion
    cout << showpoint << setprecision(2) << fixed;
    cout << "Enter a temperature in Fahrenheit is: " << fahrenheit << endl;
    cout << endl; 

    // Temp in F
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << endl; 

    // F to C formula
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Temp Conversion 
    cout << showpoint << setprecision(2) << fixed;
    cout << "Enter a temperature in Celsius is: " << celsius << endl;
    cout << endl; 


    return 0;

}