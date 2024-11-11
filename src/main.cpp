#include <iostream>
using namespace std;

int main() {
    int choice;
    float temperature, result;

    cout << "Temperature Converter\n";
    cout << "Choose an option\n";
    cout << "[1]. Celsius to Fahrenheit\n";
    cout << "[2]. Fahrenheit to Celsius\n";
    cout << "Option (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the temperature in Celsius: ";
        cin >> temperature;
        result = (temperature * 9/5) + 32;
        cout << "The temperature in Fahrenheit is: " << result << "°F\n";
    } else if (choice == 2) {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temperature;
        result = (temperature - 32) * 5/9;
        cout << "The temperature in Celsius is: " << result << "°C\n";
    } else {
        cout << "Invalid option. Choose a number between 1 and 2.\n";
    }

    return 0;
}
