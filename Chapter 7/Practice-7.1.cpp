#include <iostream>
float f(float x, float y);
int main()
{
    using namespace std;
    cout << "Please enter two numbers(0 to quit): ";
    float x, y;
    cin >> x >> y;
    while(x > 0 && y > 0)
    {
        cout << "调和平均数是： " << f(x, y) << endl;
        cout << "Please another enter two numbers(0 to quit): ";
        cin >> x >> y;
    }
	return 0;
}

float f(float x, float y)
{
    return 2.0 * x * y / (x + y);
}
