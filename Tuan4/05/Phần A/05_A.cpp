//Bai3.


#include <iostream>
using namespace std;

void chuyen(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << &x << " " << y << " " << &y << endl;
}
void chuyenx(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << &x <<  " " << y << " " << &y << endl;
}

int main() {
    int a = 5, b = 6;
    cout << &a << " " << &b << endl;
    chuyen(a,b );
    chuyenx(a,b);
}
Ket qua in ra:
  0x61fe1c   0x61fe18
6 0x61fdf0 5 0x61fdf8
6 0x61fe1c 5 0x61fe18
Nhan xet : dia chi cua bien trong ham chuyen() khong trung voi dia chi cua 2 bien a, b khai bao trong ham main().

-------------------------------------Bai4---------------------------------------
Mảng được truyền theo cơ chế truyền tham chiếu. KHi truyền mảng vào hàm, hàm nhận 1 con trỏ trỏ vào phần tử đầu tiên
và có thể thay đổi mảng ban đầu.
String có thể truyền được theo cả 2 kiểu.
truyền giá trị: hàm tạo một bản sao của chuỗi, ko ảnh hưởng chuỗi gốc.
truyền tham chiếu: hàm nhận địa chỉ của chuỗi và có thể thay đổi chuỗi.
Chuong trinh:

#include <iostream>
#include <string>
using namespace std;

void mang(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] *= 2;
}

void string1(string str) {
    str += " modified";
}

void string2(string &str) {
    str += " modified";
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Mang goc: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mang(arr, size);

    cout << "Mang luc sau: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    string str1 = "string1";

    cout << "chuoigoc: " << str1 << endl;

    string1(str1);

    cout << "Sua bang truyen gia tri: " << str1 << endl;

    string str2 = "string2";

    cout << "Chuoi goc 2 : " << str2<< endl;

    string2(str2);

     cout<<"sua bang truyen tham chieu: "<<str2<<endl;

     return 0;
}
in ra man hinh:

Mang goc: 1 2 3
Mang luc sau: 2 4 6
chuoigoc: string1
Sua bang truyen gia tri: string1
Chuoi goc 2 : string2
sua bang truyen tham chieu: string2 modified

Bai5.

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &y = x;

    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << &y << endl;

    int &z; // error: declaration of reference variable 'z' requires an initializer

    int a = 10;
    y = a;

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}
a. Biến tham chiếu & biến mà nó chiếu tới là 2 biến trong bộ nhớ.
b. Không.
c. Khi biến tham chiếu dc khai bao toi mot gia trị, ko thể cho nó tham chiếu tới giá trị khác.
 Khi cho y đến a, y vẫn chiếu tới x và x = 10.

 Bai6.
#include<iostream>
using namespace std;

int searc(int key, int a[], int low, int high) {
   if (low > high) return -1;
   int mid = (low + high) / 2;
   if (a[mid] == key) return mid;
   if (a[mid] > key)
      return searc(key, a, low, mid-1);
   return searc(key, a, mid+1, high);
}

int timX(int key, int a[], int low, int high) {
    int pl = -1;
    for(int i = 0; i < 8; i++) {
        if(a[i]==key) {
             pl = i;
        }
    }
    return pl;
}


int main()
{
    int mang[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 3, y = 4;
    int tim = 1;
    cout << searc(tim, mang, 1, 8) << endl;
    cout << timX(tim, mang, 1, 8);
}
Nhan xet:
Ham de quy: neu tim o phan tu dau tien, ham tra ve -1;
Ham dung vong lap cho ket qua dung voi moi lan thu.

