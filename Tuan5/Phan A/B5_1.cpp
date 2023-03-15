#include<iostream>
using namespace std;

int main()
{
 int a[] = {3, 5, 6};
    char b[3] = {'d', 'f', 'h'};
    for(int i =0; i<3;i++) {
        cout << &a[i] << " ";  //0x61fe08 0x61fe0c 0x61fe10
    }
    for(int i =0; i<3;i++) {
        cout << &b[i] << " ";   //dfh♥ fh♥ h♥
    }
    for(int i =0; i<3;i++) {
        cout << (void *)&b[i] << " ";  //0x61fe05 0x61fe06 0x61fe07
    }
}

