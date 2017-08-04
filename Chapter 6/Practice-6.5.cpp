#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter your income: ";
    int tvarps;
    while (cin >> tvarps && tvarps >= 0)
    {
        float sum = 0.0;
        if (tvarps > 35000)
        {
            sum += (tvarps - 35000) * 0.20;
            sum += 20000 * 0.15;
            sum += 10000 * 0.10;
            sum += 5000 * 0.00;
        }
        else if (tvarps > 15000 && tvarps <= 35000)
        {
            sum += (tvarps - 15000) * 0.15;
            sum += 10000 * 0.10;
            sum += 5000 * 0.00;
        }
        else if (tvarps > 5000 && tvarps <= 15000)
        {
            sum += (tvarps - 5000) * 0.10;
            sum += 5000 * 0.00;
        }
        else
        {
            sum += 5000 * 0.00;
        }
        cout << "The tax is " << sum << endl;
        cout << "Enter your income: ";
    }
    cout << "Bye!\n";
    return 0;
}
