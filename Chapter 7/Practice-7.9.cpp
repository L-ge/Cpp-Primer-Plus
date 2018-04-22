#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    double temp;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter student #" << (i + 1) << " fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        if (!pa[i].fullname || !*pa[i].fullname)
            break;
        cout << "Enter student #" << (i + 1) << " hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter student #" << (i + 1) << " ooplevel: ";
        (cin >> pa[i].ooplevel).get();
    }
    return i;
}

void display1(student st)
{
    cout << "#1Student's fullname: " << st.fullname << endl;
    cout << "#1Student's hobby: " << st.hobby << endl;
    cout << "#1Student's ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "#2Student's fullname: " << ps->fullname << endl;
    cout << "#2Student's hobby: " << ps->hobby << endl;
    cout << "#2Student's ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "#3Student's fullname: " << pa[i].fullname << endl;
        cout << "#3Student's hobby: " << pa[i].hobby << endl;
        cout << "#3Student's ooplevel: " << pa[i].ooplevel << endl;
    }
}

