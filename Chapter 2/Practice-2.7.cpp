#include <iostream>
void showtime(int, int);

int main()
{
    using namespace std;
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    showtime(hour, minute);
	return 0;
}

void showtime(int hour, int minute)
{
    using namespace std;
    cout << "Time: " << hour << ":" << minute << endl;
}
