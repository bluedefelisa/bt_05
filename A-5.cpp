#include<iostream>
using namespace std;

int y(int &a)
{
    cout << "&a = " << &a<< endl;
    return a;
}

int main()
{
    int a = 24;
    int &b = a;
    cout << "&b = " << &b << endl;
    int y(int& );
    cout << "&a = " << &a << endl;
    y(a);
    int c = 27;
    b = c;
    cout << "&c = " << &c << endl;
    cout << "&b = " << &b ;

    return 0;
}


//a, la cung 1 bien
//b, co
//c, co
