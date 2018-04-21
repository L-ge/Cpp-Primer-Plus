#include <iostream>
int input(float []);
void show(float [], int);
void average(float [], int n);
using namespace std;
int main()
{
    cout << "Please enter at most ten numbers: \n";
    cout << "(Input letters can end the input early)\n";
    float golf[10];
    int n = input(golf);
    show(golf, n);
    average(golf, n);
	return 0;
}

int input(float ar[])
{
    int i;
    float temp;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show(float ar[], int n)
{
    cout << "You enter the numbers are \n";
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}

void average(float ar[], int n)
{
    cout << "The average is ";
    float sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += ar[i];
    cout << sum / n << endl;
}
