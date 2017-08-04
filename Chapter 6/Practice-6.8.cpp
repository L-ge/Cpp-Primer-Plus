#include <iostream>
#include <fstream>
#include <cstdlib>
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
    int count = 0;
    char ch;
    inFile >> ch;
    while (inFile.good())
    {
        ++count;
        inFile >> ch;
    }
    cout << "The number of character is " << count << endl;
    inFile.close();
	return 0;
}
