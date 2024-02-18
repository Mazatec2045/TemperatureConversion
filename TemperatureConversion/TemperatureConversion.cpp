#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Convert Celsius to Fahrenheit
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "Temperature in Fahrenheit: " << fixed << showpoint << setprecision(2) << fahrenheit << endl;

    // Convert Fahrenheit to Celsius
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << fixed << showpoint << setprecision(2) << celsius << endl;

    return 0;
}