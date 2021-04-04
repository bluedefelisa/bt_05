#include<iostream>

using namespace std;

int Cach1(int n)
{
    cout << "n1 = " << &n << endl;
    return n;
}

int Cach2(int &n)
{
    cout << "n2 = " << &n << endl;
    return n;
}

int main()
{
    int n = 25;
    cout <<"n  = "<< &n << endl;
    Cach1(n);
    Cach2(n);
    return 0;
}
// dia chi cua tham so khi truyen theo kieu pass-by-value khac voi dia chi cua doi so
// dia chi cua tham so khi truyen theo kieu pass-by-reference thi lai giong voi dia chi cua doi so
