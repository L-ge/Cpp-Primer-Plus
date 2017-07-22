#include <iostream>
struct car
{
    std::string producer;
    int year;
};
int main()
{
    using namespace std;
    cout << "How many cars do you wish to catalog? ";
    int number;
    cin >> number;
    car * pc = new car[number];
    for (int i = 0; i < number; ++i)
    {
        cin.get();
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, pc[i].producer);
        cout << "Please enter the year made: ";
        cin >> pc[i].year;
    }
    cout << "Here is your collection: \n";
    for (int i = 0; i < number; ++i)
    {
       cout << pc[i].year << " " << pc[i].producer << endl;
    }
	return 0;
}
