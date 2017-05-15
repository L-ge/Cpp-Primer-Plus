#include <iostream>
int main()
{
    using namespace std;
    float consume;
    cout << "Enter your car consume gasline per 100 kilometer: ";
    cin >> consume;
    cout << "Your car can run " << int (62.14 / (consume / 3.875)) << "(mpg) miles per gallon gasoline.\n";
	return 0;
}
