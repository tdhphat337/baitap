
#include <bits/stdc++.h>
using namespace std;
int tong(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int nguon_goc(int m){
    for (int i = m/2; i < m; i++) {
        if(tong(i)+i==m)return i;
    }
    return 0;
}
int main()
{
    int m;
    cin>>m;
    cout<<nguon_goc(m);
    return 0;
}
