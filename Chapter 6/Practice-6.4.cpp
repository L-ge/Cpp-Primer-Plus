#include <iostream>
// Benevolent Order of Programmers name structure
const int strsize = 20;
struct bop
{
    char fullname[strsize];   // real name
    char title[strsize];      // job title
    char bopname[strsize];    // secret BOP name
    int preference;           // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{
    using namespace std;
    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name        b. display by title\n"
         << "c. display by bopname     c. display by preference\n";

    bop boparr[5] =
    {
        {"Wimp Macho", "doctor", "Hahahaha", 0},
        {"Raki Rhodes", "Junior Pragrammer", "Enenenen", 1},
        {"Celia Laiter", "student", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "Xiao Hua", 1},
        {"Pat Hand", "student", "LOOPY", 2}
    };
    char choice;
    cout << "Enter your choice: ";
    cin >> choice;
    while (choice != 'q')
    {
        switch(choice)
        {
            case 'a' :
                for (int i = 0; i < 5; ++i)
                    cout << boparr[i].fullname << endl;
                break;
            case 'b' :
                for (int i = 0; i < 5; ++i)
                    cout << boparr[i].title << endl;
                break;
            case 'c' :
                for (int i = 0; i < 5; ++i)
                    cout << boparr[i].bopname << endl;
                break;
            case 'd' :
                for (int i = 0; i < 5; ++i)
                {
                    if (boparr[i].preference == 0)
                        cout << boparr[i].fullname << endl;
                    if (boparr[i].preference == 1)
                        cout << boparr[i].title << endl;
                    if (boparr[i].preference == 2)
                        cout << boparr[i].bopname << endl;
                }
                break;
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!\n";
	return 0;
}
