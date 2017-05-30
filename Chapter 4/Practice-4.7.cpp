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
    William w;
    cout << "Enter the name: ";
    getline(cin, w.name);
    cout << "Enter the length: ";
    cin >> w.length;
    cout << "Enter the weight: ";
    cin >> w.weight;
    cout << "\nName: " << w.name
         << "\nLength: " << w.length
         << "\nWeight: " << w.weight
         << endl;
	return 0;
}
