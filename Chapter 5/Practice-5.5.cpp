#include <iostream>

int main()
{
    using namespace std;
    string month[12] =
    {
       "January",
       "February",
       "March",
       "April",
       "May",
       "June",
       "July",
       "August",
       "September",
       "October",
       "November",
       "December"
    };
    int sale[12];
    int sum = 0;
    cout << "Enter the year's sale: \n";
    for (int i = 0; i < 12; ++i)
    {
        cout << month[i] << " is ";
        cin >> sale[i];
        sum += sale[i];
    }
    cout << "\nThe total sale is " << sum << endl;
    for (int i = 0; i < 12; ++i)
        cout << month[i] << " is " << sale[i] << endl;
	return 0;
}
