#include <iostream>
double trans(double);

int main()
{
    using namespace std;
    cout << "Enyer the number of light years: ";
    double lightyear;
    cin >> lightyear;
    cout << lightyear << " light years = " << trans(lightyear) << " astronomical units." << endl;
	return 0;
}

double trans(double lightyear)
{
    return 63240 * lightyear;
}
