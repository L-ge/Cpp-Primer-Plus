#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<float, 3> grade;
    cout << "Enter the first grade: ";
    cin >> grade[0];
    cout << "Enter the second grade: ";
    cin >> grade[1];
    cout << "Enter the third grade: ";
    cin >> grade[2];

    cout << "The average of the 3 grades is "
         << (grade[0] + grade[1] + grade[2]) / 3
         << endl;
	return 0;
}
