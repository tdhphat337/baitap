#include <bits/stdc++.h>
using namespace std;
int n,k,x[100],cnt;

void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k)++cnt;
        else Try(i+1);
    }
}
int main() {
    cin >> n>>k;
    Try(1);
    cout<<cnt;
    return 0;
}
