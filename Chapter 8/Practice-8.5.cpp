#include <iostream>

template<typename T>
T max5(T a[])
{
    T max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int main()
{
    int aint[5] = {5,2,7,3,0};
    double adouble[5] = {2.1, 3.1, 1.1, 5.3, 0.2};
    std::cout << "aint max is " << max5(aint) << std::endl;
    std::cout << "adouble max is " << max5(adouble) << std::endl;
    return 0;
}
