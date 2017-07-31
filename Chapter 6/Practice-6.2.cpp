#include <iostream>
int main()
{
    using namespace std;
    double donation[10];
    int i = 0;
    double sum = 0.0;
    while (i < 10 && cin >> donation[i])
    {
        sum += donation[i];
        ++i;
    }
    double ave = sum / i;
    cout << "Average: " << ave << ", \n";
    int count = 0;
    for (int j = 0; j < i; ++j)
    {
        if (donation[j] > ave)
            ++count;
    }
    cout << "There has " << count << " numbers bigger than average.\n";
	return 0;
}
