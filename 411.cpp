#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool check1(long long n){
    if(n<2)return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;   
    }return true;
}
bool check2(long long n){
    long long dem=0;
    if(check1(n)){
        while(n>9){
            n/=10;
            if(check1(n)==false)dem++;
        }
        if(dem==0)return true;
        else return false;
    }
}
int main() {
    long long n,dem=0;cin>>n;
    vector<long long>s;
    for(long long i=pow(10,n-1);i<pow(10,n);i++){
        if(check2(i)){
            s.push_back(i);
        }
    }cout<<s.size()<<endl;
    for(long long x:s)cout<<x<<" ";
    return 0;
}
