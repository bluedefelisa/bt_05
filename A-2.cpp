#include<iostream>

using namespace std;

const int x = 111;

int factorial(int x){
    cout << "x = " << x << " at " << &x << endl;
    if(x == 1) return 1;
    return factorial(x-1)*x;
}

int main()
{
    cout << factorial(x);
    return 0;
    //moi bien cach nhau 30 byte
}
