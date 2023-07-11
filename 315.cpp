#include <bits/stdc++.h>
using namespace std;
int dem(int n){
    int count=1;
    while(n!=0){
        count*=10;
        n/=10;
    }
    return count/10;
}
int tach(int n){
    while (n >= 10) {
        n /= dem(n);
    }
    return n;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        int tmp=i;
        for(int j=i+1;j<n;j++){
            if(tach(a[j])>tach(a[tmp]))tmp=j;
        }
        swap(a[tmp],a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}