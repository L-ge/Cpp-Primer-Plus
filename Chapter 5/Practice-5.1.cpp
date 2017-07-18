#include <iostream>
int main()
{
    using namespace std;
    int small, big;
    cout << "Enter the two integers: ";
    cin >> small >> big;
    int sum = 0;
    for (int i = small; i <= big; ++i)
        sum += i;
    cout << "The sum is " << sum;
	return 0;
}
