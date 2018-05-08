#include <iostream>
#include <cctype>
#include <string>

using namespace std;
void tochange(string & str);

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin,str);
    while (str != "q")
    {
        tochange(str);
        cout << str<< endl;
        cout << "Next string (q to quit): ";
        getline(cin,str);
    }
    cout << "Bye.";
    return 0;
}

void tochange(string & str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
}
