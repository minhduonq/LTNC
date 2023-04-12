
Bai1.
#include<iostream>
using namespace std;

void f(int a[])
{
    for(int i = 0; i < 3; i++) {
        cout << &a[i] << " ";
    }
}

int main()
{
    int a[] = {2, 3, 4};
    cout << &a[0] << endl;
    for(int i = 0; i < 3;i++) {
        cout << &a[i] << " ";
    }
    cout << endl;
    f(a);

}
//Nhan xet: co cung cac gia tri
Bai2
Hien tuong: Chương trình chạy liên tục.
Giải thích: Do ko có điều kiện dừng trong hàm.
Bài 3.
Hiện tượng: Không in ra bất kì cái j.
Giải thích: Hàm này gọi cùng một đối số N, ko thay đổi N nên N != 1 -> đệ 
quy vô hạn
Bài 4.
Mỗi lần đệ quy thêm một frame vào call stack. Nếu số lần gọi quá lớn làm đầy hoặc
tràn - >lỗi  stack overflow
Bài 5.
Nhận xét:
Đối với số N lớn, vòng lặp sẽ đưa ra kết quả nhanh hơn đệ quy.
Bài 6.

Bai7
#include <iostream>
#include <algorithm>

using namespace std;

void permute(string str, int l, int r) {
    if (l == r) { //neu ki tu dau tien va cuoi cung trung nhau
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]); //doi cho tung ki tu voi ki tu dau tien
            permute(str, l+1, r);
            swap(str[l], str[i]);
        }
    }
}

int main() {
    string str;
    cout << "Enter a string without spaces: ";
    cin >> str;
    int n = str.length();
    permute(str, 0, n-1);
    return 0;
}

Bai8

Phần B.
Bài 1.
Không. 
Bài 2. 
Không
Bài 3. 
Tùy vào từng trường hợp, có thể chọn phương pháp hiệu quả hơn.
Bài 4.
Khi viết đệ quy, phải luôn luôn chú ý đến điều kiện dừng.
Bài 5.
In ra: 6 4 2 2 1 1 4 3 1 1 3 6
Bài 6.
 Vấn đề của hàm:
Nếu n<=1 trả về 0. Tuy nhiên 0! = 1 nên nếu n = 0 hàm bị sai.
ko có điều kiện n dương. nếu n âm -> đệ quy đến chết.
Bài 7.
Hàm mystery(a,b) tính tích của a và b bằng cách sử dụng phép 
toán cộng và nhân 2. Nếu b chia hết cho 2, ta thực hiện phép 
toán nhân 2 trên a và chia b cho 2. Nếu b không chia hết cho 
2, ta đệ quy gọi hàm mystery(a+a, b/2) và cộng thêm a vào kết 
quả trả về. Hàm này có thể sử dụng để tính toán phép nhân hai 
số nguyên dương.
 mystery(2,25) = 50 và mystery(3,11) = 33.
Khi thay + bằng *, return 0 thành return 1, hàm mystery trở thành hàm tính mũ a^b.
Khi đó, mystery(2,25) = 2^25 và mystery(3,11) = 3^11.
