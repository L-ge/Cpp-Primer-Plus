#include <iostream>
int main()
{
    using namespace std;
    int height;
    cout << "Enter your height(inch): __\b\b";
    cin >> height;
    const int Inch_per_foot = 12;
    cout << "Your height is : " << height / Inch_per_foot << " feet " << height % Inch_per_foot << " inch." << endl;
	return 0;
}
