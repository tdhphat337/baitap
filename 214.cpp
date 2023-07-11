#include <bits/stdc++.h>
using namespace std;

bool chinhphuong(int n){
    int m=sqrt(n);
    return (m*m==n);
}

int main() {
    int n,count=0;
    cin >> n;
    if(chinhphuong(n))cout<<"YES";
    else cout<<"NO";
    return 0;
}
