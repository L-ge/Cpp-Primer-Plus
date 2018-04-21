#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box b);
void count(box * pb);
void input();
int main()
{
    input();
	return 0;
}

void input()
{
    using namespace std;
    box b;
    cout << "Enter the infomation of box: \n";
    cout << "maker: ";
    cin.getline(b.maker, 40);
    cout << "height: ";
    cin >> b.height;
    cout << "width: ";
    cin >> b.width;
    cout << "length: ";
    cin >> b.length;
    cout << endl;
    count(&b);
    show(b);
}

void show(box b)
{
    using namespace std;
    cout << "Show the infomation of box: \n";
    cout << "maker is " << b.maker << endl;
    cout << "height is " << b.height << endl;
    cout << "width is " << b. width << endl;
    cout << "length is " << b.length << endl;
    cout << "volume is " << b.volume << endl;
}

void count(box * pb)
{
    pb->volume = pb->height * pb->width * pb->length;
}
