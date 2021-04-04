#include<iostream>

using namespace std;

bool check_prime(const int& n)
{
    if(n < 1) return false;
    for(int i = 2; i <= n/2; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(check_prime(i)) cout << i << " ";
    }
    return 0;
}
