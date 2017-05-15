#include <iostream>
int main()
{
    using namespace std;
    long long second;
    cout << "Enter the number of seconds: ";
    cin >> second;

    const int Hour_per_day = 24;
    const int Minute_per_hour = 60;
    const int Second_per_minute = 60;
    cout << second << " seconds = " << second / (Hour_per_day * Minute_per_hour * Second_per_minute)
         << " days, " << (second % (Hour_per_day * Minute_per_hour * Second_per_minute)) / (Minute_per_hour * Second_per_minute)
         << " hours, " << (second % (Minute_per_hour * Second_per_minute)) /  Second_per_minute
         << " minutes, " << second % Second_per_minute
         << " seconds" << endl;
	return 0;
}
