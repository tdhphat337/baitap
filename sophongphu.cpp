#include <bits/stdc++.h>
using namespace std;

int main() {
    long long L,R,count=0;
    cin>>L>>R;
    vector<long long>s(R+1,0);
    for(long long i=1;i<=R;i++){
        for(long long j=i*2;j<=R;j+=i){
            s[j]+=i;
        }
    }
    for(long long i=L;i<=R;i++){
        if(s[i]>i)count++;
    }
    cout<<count;
    return 0;
}