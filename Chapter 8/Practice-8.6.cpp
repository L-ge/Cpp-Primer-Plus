#include <iostream>
#include <cstring>
template<typename T>
T max5(T a[], int n)
{
    T max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

char * maxn(char * ar[], int n);

int main()
{
    using namespace std;
    int aint[6] = {5,2,12,7,3,0};
    double adouble[4] = {3.1, 1.1, 5.3, 0.2};
    cout << "aint max is " << max5(aint, 6) << endl;
    cout << "adouble max is " << max5(adouble, 4) << endl;
    char * ar[5] = {
                      "xiaohuamaoyoulaile",
                      "xiaomingquchifanlema",
                      "jintiannixiaolema",
                      "wojintianyoashangban",
                      "haohaoxuexiba"
                   };
    cout << maxn(ar, 5);
    return 0;
}

char * maxn(char * ar[], int n)
{
    char * cmax = ar[0];
    int lmax = strlen(ar[0]);
    for (int i = 1; i < n; i++)
    {
        if (lmax < strlen(ar[i]))
        {
            lmax = strlen(ar[i]);
            cmax = ar[i];
        }
    }
    return cmax;
}
