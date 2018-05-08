#include <iostream>
struct CandyBar
{
    char * name;
    double weight;
    int heat;
};

using namespace std;
void init(CandyBar & cb, char * name = "Millennium", double weight = 2.85, int heat = 350);
const void show(const CandyBar & cb);

int main()
{
    using namespace std;
    CandyBar cb1, cb2, cb3;
    init(cb1, "Joker", 189.2, 20);
    init(cb2, "Mike", 12.2);
    init(cb3);
    show(cb1);
    show(cb2);
    show(cb3);
    return 0;
}

void init(CandyBar & cb, char * name, double weight, int heat)
{
    cb.name = name;
    cb.weight = weight;
    cb.heat = heat;
}

const void show(const CandyBar & cb)
{
    cout << "名称是：" << cb.name << endl;
    cout << "重量是：" << cb.weight << endl;
    cout << "热量是：" << cb.heat << endl << endl;;
}


