#include <iostream>
using namespace std;

int fib[100],result[100],fibSize = 0,resultSize = 0; 

void findFib(int n) {
    int i = 0, j = 1;
    while (j <= n) {
        fib[fibSize++] = j;
        int temp = i + j;
        i = j;
        j = temp;
    }
}

void findSum(int n) {
    for (int i = fibSize - 1; i >= 0; i--) {
        if (fib[i] <= n) {
            result[resultSize++] = fib[i];
            n -= fib[i];
        }
    }
}

int main() {
    int n;
    cin >> n;
    findFib(n);
    findSum(n);
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
