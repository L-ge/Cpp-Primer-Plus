#include <iostream>
double add(double x, double y);
double calculate(double a, double b, double (*pf) (double, double));
double subtract(double x, double y);

int main()
{
    using namespace std;
    double x, y;
    int n;
    cout << "Enter the text number: ";
    cin >> n;
    double (*pf[n])(double, double);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the two double numbers(q to quit): ";
        if (cin >> x >> y)
        {
            pf[i] = add;
            cout << "add is ";
            cout << calculate(x, y, pf[i]) << endl;
            pf[i] = subtract;
            cout << "subtract is ";
            cout << calculate(x, y, pf[i]) << endl;
        }
        else
            break;
    }
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double calculate(double a, double b, double (*pf)(double x, double y))
{
    return (*pf)(a, b);
}

double subtract(double x, double y)
{
    return x - y;
}
