#include <iostream>
const int Max = 10;
int Fill_array(double ar[], int limit);
void Show_array(const double ar[], int n);
void Reverse_array(double ar[], int n);

int main()
{
    using namespace std;
    double ar[Max];
    int size = Fill_array(ar, Max);
    Show_array(ar, size);
    Reverse_array(ar, size);
    Show_array(ar, size);
    return 0;
}

int Fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)     // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    cout << endl;
    return i;
}

void Show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Array #" << (i + 1) << ": ";
        cout << ar[i] << endl;
    }
    cout << endl;
}

void Reverse_array(double ar[], int n)
{
    double temp;
    for (int i = 1; i < n-1-i; i++)
    {
        temp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = temp;
    }
    std::cout << std::endl;
}
