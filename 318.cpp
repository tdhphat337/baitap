#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s=0;
    cin>>n;
    int a[n],b[n];
    set<int>st;
    for (int i = 0; i < n; i++) {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s=abs(a[i]+b[j]);
            st.insert(s);
        }
    }
    for(int x:st){
        cout<<x;
        break;
    }
    return 0;
}