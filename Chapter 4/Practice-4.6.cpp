#include <iostream>
struct CandyBar
{
    std::string brand;
    float weight;
    int power;
};
int main()
{
    CandyBar snack[3] =
    {
        {"Mocha", 2.2, 290},
        {"Sugar", 2.3, 300},
        {"Yakee", 2.4, 200}
    };
    std::cout << "1st Brand: " << snack[0].brand
         << "\n1st Weight: " << snack[0].weight
         << "\n1st power: " << snack[0].power
         << std::endl << std::endl;
    std::cout << "2nd Brand: " << snack[1].brand
         << "\n2nd Weight: " << snack[1].weight
         << "\n2nd power: " << snack[1].power
         << std::endl << std::endl;
    std::cout << "3rd Brand: " << snack[2].brand
         << "\n3rd Weight: " << snack[2].weight
         << "\n3rd power: " << snack[2].power
         << std::endl << std::endl;
	return 0;
}
