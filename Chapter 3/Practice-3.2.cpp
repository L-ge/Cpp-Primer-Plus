#include <iostream>
int main()
{
    using namespace std;
    int foot, inch, weight;
    cout << "Enter the foot of your height: ";
    cin >> foot;
    cout << "Enter the inch of your height: ";
    cin >> inch;
    cout << "Enter your weight: ";
    cin >> weight;

    const int Inch_per_foot = 12;
    const float Pounds_per_kilogram = 2.2;
    const float Meter_per_inch = 0.0254;
    cout << "Your BMI is "
         << (weight / Pounds_per_kilogram) / ((foot * Inch_per_foot + inch) * Meter_per_inch * (foot * Inch_per_foot + inch) * Meter_per_inch)
         << "." << endl;
	return 0;
}
