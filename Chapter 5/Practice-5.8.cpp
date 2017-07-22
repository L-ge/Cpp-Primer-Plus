#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done): \n";
    char word[30];
    cin >> word;
    int count = 0;
    while (strcmp(word, "done"))
    {
        ++count;
        cin >> word;
    }
    cout << "You entered a total of " << count << " words.\n";
	return 0;
}
