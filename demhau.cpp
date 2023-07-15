// Bạn cần phải đặt 8
//  quân hậu lên một bàn cờ vua, sao cho không có hai quân hậu nào tấn công lẫn nhau. Để tăng phần thử thách, mỗi ô vuông sẽ được đánh dấu là ô trống hoặc ô bị cấm, và bạn chỉ được xếp các quân hậu trên những ô trống. Tuy nhiên, những ô bị cấm không chặn đường chiếu của các quân hậu.

// Có bao nhiêu cách để đặt các quân hậu?

// Input
// Gồm 
//  dòng, mỗi dòng chứa 
// 8 kí tự. Mỗi ô vuông là trống nếu kí tự tại đó là ., hoặc bị cấm nếu là *.
// Output
// In ra một số nguyên: số lượng cách xếp hậu.
// Example
// Sample input

// Copy
// Copy
//........
//........
//..*.....
//........
//........
//.....**.
//...*....
//........
// Sample output

// Copy
// Copy
// 65
#include <iostream>

using namespace std;

bool ktra_coantoankhong(char ban[][8], int hang, int cot) {
    int N = 8;
    for (int i = 0; i < N; i++) {
        if (ban[hang][i] == 'Q') return false;
    }for (int i = 0; i < N; i++) {
        if (ban[i][cot] == 'Q') return false;
    }for (int i = hang, j = cot; i >= 0 && j >= 0; i--, j--) {
        if (ban[i][j] == 'Q') return false;
    }for (int i = hang, j = cot; i >= 0 && j < N; i--, j++) {
        if (ban[i][j] == 'Q') return false;
    }
    return true;
}

int quay_lui(char ban[][8], int hang) {
    int count = 0;
    int N = 8;

    if (hang == N) {
        // Đã con bé lên thớt =)), tăng biến đếm lên nghe
        count++;
        return count;
    }
    // Đặt quân hậu trên từng ô vuông trong hàng hiện tại
    for (int cot = 0; cot < N; cot++) {
        if (ban[hang][cot] == '.' && ktra_coantoankhong(ban, hang, cot)) {
            // đẹt con bé lên ô vuông hợp lệ kaka
            ban[hang][cot] = 'Q';
            // Đệ quy tới hàng típ theo
            count += quay_lui(ban, hang + 1);
            // backtrack
            ban[hang][cot] = '.';
        }
    }
    return count;
}

int main() {
    char board[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }
    cout << quay_lui(board, 0) << endl;
    return 0;
}
