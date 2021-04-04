#include<iostream>
#include<cmath>

using namespace std;

int Cach1(float x)
{
    float n = x - int(x);
    if(n >= 0.5) x = ceil(x);
    else x = floor(x);
    return x;
}

int Cach2(float x)
{
    float n = x - int(x);
    if(n >= 0.5) x = int(x)+1;
    else x = int(x);
    return x;
}

int main()
{
    double x; cin >> x;
    cout << "Cach 1:" << Cach1(x)<< endl;
    cout << "Cach 2:" << Cach2(x);
    return 0;
}
