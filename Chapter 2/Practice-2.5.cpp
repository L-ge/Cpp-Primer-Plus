#include <iostream>

float trans(float);

int main()
{
    using namespace std;
    cout << "Please enter a Celsius value: ";
    float celsius;
    cin >> celsius;
    float fahrenheit = trans(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
	return 0;
}

float trans(float celsius)
{
    return 1.8 * celsius + 32.0;
}
