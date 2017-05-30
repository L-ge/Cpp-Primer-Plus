#include <iostream>
struct CandyBar
{
    std::string brand;
    float weight;
    int power;
};
int main()
{
    CandyBar snack = {"Mocha", 2.3, 350};
    std::cout << "Brand: " << snack.brand
         << "\nWeight: " << snack.weight
         << "\npower: " << snack.power
         << std::endl;
	return 0;
}
