#include<iostream>
using namespace std;

int main()
{

    cout << 1;
    int a[] = {2, 4, 5, 7};
char cho[] = {'m', 'g', 'h'};
    for(int i = 0; i < 3; i++) {
        cout << &a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++) {
        cout << &cho[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++) {
        cout << (void *)&cho[i] << " ";
    }


}
//10x61fe00 0x61fe04 0x61fe08
//mgh☻ gh☻ h☻
//0x61fdfd 0x61fdfe 0x61fdff
