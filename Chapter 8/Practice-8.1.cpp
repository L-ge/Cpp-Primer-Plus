#include <iostream>
#include <string>
using namespace std;
void showone(char * str);
void showmany(char * str, int n);

int main()
{
    cout << "Show 'HelloWorld!' number is: ";
    int n;
    cin >> n;
    char * str = "HelloWorld!";
    if (n == 1)
        showone(str);
    else
        showmany(str, n);
    return 0;
}

void showone(char * str)
{
    cout << endl << str << endl;
}

void showmany(char * str, int n)
{
    for (int i = 1; i <= n; ++i)
        cout << endl << str << endl;
}

