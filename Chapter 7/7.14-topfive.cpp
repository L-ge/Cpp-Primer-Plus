// topfive.cpp -- handling an array of string objects
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main()
{
    string list[SIZE];     // an array holding 5 string object
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        // int j;
        // cin >> j;
        // 如果有这两行的话，结果会不一样，因为getline接受“enter”，如果前面输入的
        // 是数字，那么getline就接受了输入数字后所按的回车键，但如果前面输入的是
        // 字符串，则不会出现这种情况，因为getline接受了输入字符串后所按的回车键。
        getline(cin, list[i]);
    }

    cout << "Your list:\n";
    display(list, SIZE);

	return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i + 1 << ": " << sa[i] << endl;
}
