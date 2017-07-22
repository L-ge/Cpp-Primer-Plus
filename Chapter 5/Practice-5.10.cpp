#include <iostream>
int main()
{
    using namespace std;
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = row - i - 1; j > 0; j--)
            cout << ".";
        for (int k = 0; k <= i; k++)
            cout << "*";
        cout << endl;
    }
	return 0;
}
