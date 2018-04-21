#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    cout << "You have one chance in "
         << probability(47, 5) * probability(27, 1)
         << " of winning.\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
