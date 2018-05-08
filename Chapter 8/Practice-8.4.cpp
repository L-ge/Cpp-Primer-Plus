#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
    char * str;
    int ct;
};

void set(stringy & stry, char * c);
const void show(const char * c, int n = 1);
const void show(const stringy stry, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    delete [] beany.str;
    return 0;
}

void set(stringy & stry, char * c)
{
    int ct = 0;
    while (c[ct] != '\0')
    {
        ct++;
    }
    stry.ct = ct;
    stry.str = new char[ct+1];
    stry.str = c;
}

const void show(const char * c, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << endl;
    }
    cout << endl;
}

const void show(const stringy stry, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "string的内容是： " << stry.str << endl;
        cout << "string的长度是： " << stry.ct << endl;
    }
    cout << endl;
}

