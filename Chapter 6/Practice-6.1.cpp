#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (islower(ch))
            cout << char(toupper(ch));
        else if (isupper(ch))
            cout << char(tolower(ch));
        cin.get(ch);
    }
	return 0;
}
