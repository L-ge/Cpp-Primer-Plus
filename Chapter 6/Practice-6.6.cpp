#include <iostream>
struct Person
{
    std::string name;
    double money;
};
int main()
{
    using namespace std;
    cout << "Enter the number of person: ";
    int number;
    cin >> number;
    Person * p = new Person[number];
    for (int i = 0; i < number; i++)
    {
        cin.get();
        cout << "Person #" << i+1 << ": \n";
        cout << "Name: ";
        getline(cin, p[i].name);
        cout << "Money: ";
        cin >> p[i].money;
    }

    cout << fixed;
    cout.setf(ios_base::showpoint);
    cout.precision(2);

    cout << "\nGrand Patrons(money > 10000): \n";
    bool flag = false;
    for (int i = 0; i < number; i++)
    {
        if (p[i].money > 10000)
        {
            cout << "Name: " << p[i].name << ", ";
            cout << "Money: " << p[i].money << endl;
            flag = true;
        }
    }
    if (!flag)
        cout << "none\n";

    cout << "\nPatrons: \n";
    flag = false;
    for (int i = 0; i < number; i++)
    {
        if (p[i].money <= 10000)
        {
            cout << "Name: " << p[i].name << ", ";
            cout << "Money: " << p[i].money << endl;
            flag = true;
        }
    }
    if (!flag)
        cout << "none\n";

    delete [] p;
	return 0;
}
