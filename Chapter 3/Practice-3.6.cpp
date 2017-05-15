#include <iostream>
int main()
{
    using namespace std;
    float distance, gasoline;
    cout << "Enter the distance: ";
    cin >> distance;
    cout << "Enter the gasoline: ";
    cin >> gasoline;
    cout << "Your car consume one gallon gasoline can run " << distance / gasoline << " miles.\n";
	return 0;
}
