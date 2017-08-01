#include <iostream>
int main()
{
    using namespace std;
    cout << "Please enter one of the following choices: \n"
         << "c) carnivore            p) pianist\n"
         << "t) tree                 g) game\n";
    char choice;
    cin >> choice;
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> choice;
    }
    switch(choice)
    {
        case 'c' : cout << "carnivore choice.\n";
                    break;
        case 'p' : cout << "pianist choice.\n";
                    break;
        case 't' : cout << "A maple is a tree.\n";
                    break;
        case 'g' : cout << "game choice.\n";
                    break;
    }
	return 0;
}
