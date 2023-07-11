#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    int dem[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i % j == 0) dem[i] = 1 - dem[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (dem[i] == 1) count++;
    }
    cout << count;
    return 0;
}
