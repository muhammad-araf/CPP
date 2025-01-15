#include <iostream>
using namespace std;

// Function to convert Celsius to other scales
void convertFromCelsius(double temp)
{
    cout << "Celsius to Fahrenheit: " << (temp * 9 / 5) + 32 << " °F" << endl;
    cout << "Celsius to Kelvin: " << temp + 273.15 << " K" << endl;
}

// Function to convert Fahrenheit to other scales
void convertFromFahrenheit(double temp)
{
    cout << "Fahrenheit to Celsius: " << (temp - 32) * 5 / 9 << " °C" << endl;
    cout << "Fahrenheit to Kelvin: " << ((temp - 32) * 5 / 9) + 273.15 << " K" << endl;
}

// Function to convert Kelvin to other scales
void convertFromKelvin(double temp)
{
    cout << "Kelvin to Celsius: " << temp - 273.15 << " °C" << endl;
    cout << "Kelvin to Fahrenheit: " << ((temp - 273.15) * 9 / 5) + 32 << " °F" << endl;
}

int main()
{
    double temperature;
    int choice;

    cout << "=== Temperature Converter Tool ===" << endl;
    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "\nSelect the current scale of the temperature:" << endl;
    cout << "1. Celsius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "\nConverted temperatures:" << endl;
    switch (choice)
    {
    case 1:
        convertFromCelsius(temperature);
        break;
    case 2:
        convertFromFahrenheit(temperature);
        break;
    case 3:
        convertFromKelvin(temperature);
        break;
    default:
        cout << "Invalid choice! Please run the program again." << endl;
    }

    return 0;
}
