#include <iostream>
struct William
{
    std::string name;
    float length;
    float weight;
};
int main()
{
    using namespace std;
    William * pw = new William;

    cout << "Enter the length: ";
    cin >> pw->length;
    cin.get();
    cout << "Enter the name: ";
    getline(cin, pw->name);
    cout << "Enter the weight: ";
    cin >> pw->weight;
    cout << "\nName: " << pw->name
         << "\nLength: " << pw->length
         << "\nWeight: " << pw->weight
         << endl;
    delete pw;
	return 0;
}
