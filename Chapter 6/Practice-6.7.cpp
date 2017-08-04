#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter words (q to quit): \n";
    string word;
    int vowsum = 0, consum = 0, others = 0;
    cin >> word;
    while (word != "q")
    {
        if (isalpha(word[0]))
        {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' ||
                word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
                vowsum++;
            else
                consum++;
        }
        else
            others++;
        cin >> word;
    }
    cout << vowsum << " words beginning with vowels" << endl;
    cout << consum << " words beginning with consonants" << endl;
    cout << others << " others" << endl;
	return 0;
}
