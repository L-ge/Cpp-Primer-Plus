#include <iostream>
int main()
{
    using namespace std;
    char firstname[20], lastname[20];
    char grade;
    int age;
    cout << "What is your first name? ";
    cin.get(firstname,20).get();
    cout << "What is your last name? ";
    cin.get(lastname, 20).get();
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lastname << ", " << firstname << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
	return 0;
}
