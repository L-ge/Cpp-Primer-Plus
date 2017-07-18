#include <iostream>
int main()
{
    using namespace std;
    float daphne = 100 + 0.1 * 100;
    float cleo = 100 + 0.05 * 100;
    int year =  1;
    while (cleo <= daphne)
    {
        cleo += 0.05 * cleo;
        daphne = daphne + 0.1 * 100;
        ++year;
    }
    cout << "After " << year << " years, "
         << "Cleo has $" << cleo
         << ", Daphne has $" << daphne
         << ".\n";
	return 0;
}
