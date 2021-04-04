#include<cmath>
#include<iostream>
#include<cstdlib>

using namespace std;

string Binary(int n)
{
    string B;
    while(n > 0)
    {
        char c = n%2 + 48;
        n = n/2;
        B = c + B;
    }
    return B;
}

int Decimal(string s)
{
    int m = 0, D = 0;
    for(int i = s.size()-1; i >= 0; i--)
    {
        D += pow(2, m)*(s[i]-48);
        m++;
    }
    return D;
}

int main()
{
    int n;
    cin >> n;
    cout <<"Nhi phan: " << Binary(n) << endl;
    cout <<"Thap phan: " << Decimal(Binary(n));
    return 0;
}

