#include <bits/stdc++.h>
using namespace std;
int cat(int n){
    int res=0;
    if(n<1)return 1;
    for(int i=0;i<n;i++){
        res+=cat(i)*cat(n-i-1);
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    cout<<cat(n);
    return 0;
}
