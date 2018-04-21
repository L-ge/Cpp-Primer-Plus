#include <iostream>
long long f(int n);
int main()
{
    using namespace std;
    cout << "Enter a number(input '-1' to quit): ";
    int n;
    cin >> n;
    while (n >= 0)
    {
        cout << n << "! is " << f(n) << endl;
        cout << "Enter another number(input '-1' to quit): ";
        cin >> n;
    }
	return 0;
}

long long f(int n)
{
    if (n == 0)
        return 1;
    else
        return n * f(n-1);
}
