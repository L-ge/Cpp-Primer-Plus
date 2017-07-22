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
    int sale[3][12];
    int totalsum = 0;
    cout << "Enter the year's sales: \n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "The " << i + 1 << " year: \n";
        int yearsum = 0;
        for (int j = 0; j < 12; ++j)
        {
            cout << month[j] << " is ";
            cin >> sale[i][j];
            yearsum += sale[i][j];
        }
        totalsum += yearsum;
        cout << "The " << i + 1 << " year sales is " << yearsum << endl << endl;;
    }
    cout << "\nThe 3 years's total sale is " << totalsum << endl;
	return 0;
}
