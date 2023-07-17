#include <bits/stdc++.h>
using namespace std;
int f[1000][1000],n;
char a[1000][1000];
int main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)cin>>a[i][j];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]=='.'){
                f[i][j]=(f[i-1][j]+f[i][j-1]);
                if(i==1&&j==1)f[i][j]=1;
            }
        }
    }
    cout<<f[n][n];
    return 0;
}