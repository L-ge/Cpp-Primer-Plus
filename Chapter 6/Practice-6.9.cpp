#include <iostream>
#include <fstream>
#include <cstdlib>
struct Person
{
    std::string name;
    double money;
};
int main()
{
    using namespace std;
    ifstream inFile;
    cout << "Enter name of data file: ";
    char filename[20];
    cin.getline(filename, 20);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int number = 5;
    inFile >> number;
    Person * p = new Person[number];
    string temp;
    for (int i = 0; i < number; i++)
    {
        getline(inFile, temp);
        getline(inFile, p[i].name);
        inFile >> p[i].money;
    }

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
