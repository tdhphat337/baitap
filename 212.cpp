#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,count=0;
    cin >> n;
    while(n>=5){
        n/=5;
        count+=n;
    }
    cout<<count;
    return 0;
}
