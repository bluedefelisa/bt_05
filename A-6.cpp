#include<iostream>

using namespace std;

int vonglap(int key, int a[], int low, int high)
{
    while(low != high)
    {
        if(low > high) return -1;
        int n = (low+high)/2;
        if(a[n] == key) return n;
        if(a[n] > key)
        {
            high = n-1;
        }
        else if(a[n] < key)
        {
            low = n+1;
        }
   }
    return low;
}

int dequy(int key, int a[], int low, int high)
{
    if(high < low) return -1;
    int n = (low + high)/2;
    if(a[n] == key) return n;
    if(a[n] > key) return dequy(key, a, low, n-1);
    if(a[n] < key) return dequy(key, a, n+1, high);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    cout << vonglap(11, a, 0, 11) << endl;
    cout << dequy(7, a, 0, 11) << endl;
    return 0;
}
