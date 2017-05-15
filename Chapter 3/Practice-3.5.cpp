#include <iostream>
int main()
{
    using namespace std;
    long long sum, t;
    cout << "Enter the world's population: ";
    cin >> sum;
    cout << "Enter the population of the US: ";
    cin >> t;
    cout << "The population of the US is " << float(t) / float(sum) * 100 << "% of the world population." << endl;
	return 0;
}
