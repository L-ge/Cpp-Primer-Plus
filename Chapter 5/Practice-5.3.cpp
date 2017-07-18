#include <iostream>
int main()
{
    using namespace std;
    int number, sum = 0;
    cout << "Enter a number(input 0 to quit): \n";
    cin >> number;
    while(number != 0)
    {
        sum += number;
        cout << "The sum is " << sum << " after input " << number <<endl;
        cout << "Enter another number(input 0 to quit): \n";
        cin >> number;
    }
	return 0;
}
