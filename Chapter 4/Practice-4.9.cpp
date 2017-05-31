#include <iostream>
struct CandyBar
{
    std::string brand;
    float weight;
    int power;
};
int main()
{
    CandyBar * pc = new CandyBar[3];

    pc[0] = {"Mocha", 2.2, 290};
    pc[1] = {"Sugar", 2.3, 300};
    pc[2] = {"Yakee", 2.4, 200};

    std::cout << "1st Brand: " << pc[0].brand
         << "\n1st Weight: " << pc[0].weight
         << "\n1st power: " << pc[0].power
         << std::endl << std::endl;
    std::cout << "2nd Brand: " << pc[1].brand
         << "\n2nd Weight: " << pc[1].weight
         << "\n2nd power: " << pc[1].power
         << std::endl << std::endl;
    std::cout << "3rd Brand: " << pc[2].brand
         << "\n3rd Weight: " << pc[2].weight
         << "\n3rd power: " << pc[2].power
         << std::endl << std::endl;
    delete [] pc;
	return 0;
}
