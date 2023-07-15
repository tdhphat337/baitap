//Hãy xét một trò chơi trong đó có n đửa trẻ được đánh số 1,2,3,...,n trong một vòng tròn. Trong quá trình chơi, điều sau được lặp lại cho đến khi không còn đứa trẻ nào: một đứa trẻ tiếp theo bị bỏ qua và một đứa trẻ tiếp theo bị loại khỏi vòng tròn. Những đứa trẻ sẽ bị loại theo thứ tự nào?
#include <iostream>
#include <list>
using namespace std;

void playGame(int n) {
    list<int> children;
    for (int i = 1; i <= n; i++) {
        children.push_back(i);
    }

    auto currentChild = children.begin();
    while (!children.empty()) {
        // Bỏ qua đứa trẻ tiếp theo
        currentChild++;
        if (currentChild == children.end()) {
            currentChild = children.begin();
        }

        // Loại bỏ đứa trẻ tiếp theo
        cout << *currentChild << " ";
        currentChild = children.erase(currentChild);

        if (currentChild == children.end()) {
            currentChild = children.begin();
        }
    }
}

int main() {
    int n;
    cin >> n;

    playGame(n);

    return 0;
}
