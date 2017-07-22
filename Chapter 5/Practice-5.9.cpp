#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done): \n";
    string word;
    cin >> word;
    int count = 0;
    while (word != "done")
    {
        ++count;
        cin >> word;
    }
    cout << "You entered a total of " << count << " words.\n";
	return 0;
}
