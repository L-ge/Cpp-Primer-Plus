#include <iostream>
int main()
{
    using namespace std;
    float degree, minute, second;
    cout << "Enter a latitude in degree, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the munutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    const int Minute_per_degree = 60;
    const int Second_per_minute = 60;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = "
         << degree + minute / Minute_per_degree + second / Second_per_minute / Second_per_minute
         << " degrees" << endl;
	return 0;
}
