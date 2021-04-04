#include<iostream>

using namespace std;

int arr(int a[])
{
    cout << "a = " << &a << endl;
}
string str(string &s)
{
    cout << "s = " << &s << endl;
    return s;
}

int main()
{
    string s = "toicodoichan";
    int a[] = {1, 3 ,55, 72, 9};
    cout << "s = " << &s << endl;
    cout << "a = " << &a << endl;
    str(s);
    arr(a);
    return 0;
}

//a,
//mang duoc truyen theo co che pass-by-reference

//b,
//string duoc truyen theo co che pass-by-value
