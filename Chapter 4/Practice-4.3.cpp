#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char firstname[20], lastname[20], name[40];
    cout << "Enter your first name: ";
    cin.get(firstname,20).get();
    cout << "Enter your last name: ";
    cin.get(lastname,20).get();
    strcat(lastname, ", ");
    strcpy(name, lastname);
    strcat(name, firstname);
    cout << "Here's the information in a single string: " << name << endl;
	return 0;
}
