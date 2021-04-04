#include<iostream>

using namespace std;

int main(){
    int m = 25;
    int a[100];
    char b[100];
    int n = 4;
    char c = 'k';
    for(int i = 0; i < 3; i++){
        cout << "a = " << &a[i] << endl;
    }// dia chi cua cac bien cach nhau 4 byte
    for(int i = 0; i < 3; i++){
        cout << "b = " << (void*)&b[i] << endl;
    }// dia chi cua cac bien cach nhau 1 byte
    cout << "m = " << &m << endl;
    cout << "n = " << &n << endl;
    cout << "c = " << (void*)&c;
    return 0;
}
