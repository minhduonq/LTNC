#include <iostream>

using namespace std;

// Hàm đệ quy tính giai thừa của một số nguyên dương
int factorial(int x) {
    // Điều kiện dừng của đệ quy
    if (x == 1) {
        return 1;
    }

    // Tính giai thừa của số nhỏ hơn
    int subFactorial = factorial(x - 1);

    // Tính giai thừa của x
    return x * subFactorial;
}

int main() {
    int x;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> x;

    cout << x << "! = " << factorial(x) << endl;

    return 0;
}
