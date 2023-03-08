#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));

    // Đọc bản đồ mìn từ bàn phím và lưu vào ma trận hai chiều board
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    // Duyệt qua từng ô của bản đồ mìn và tính toán giá trị của mỗi ô
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '*') {
                cout << "*";
            } else {
                int count = 0;
                for (int ii = i - 1; ii <= i + 1; ii++) {
                    for (int jj = j - 1; jj <= j + 1; jj++) {
                        if (ii >= 0 && ii < m && jj >= 0 && jj < n && board[ii][jj] == '*') {
                            count++;
                        }
                    }
                }
                cout << count;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
