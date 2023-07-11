#include <bits/stdc++.h>
using namespace std;
void sort(int n,int a[]){
    for(int i=0;i<n-1;i++){
        int tmp=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[tmp])tmp=j;
        }
        swap(a[tmp],a[i]);
    }
}
int main() {
    int a,b,m,n;
    cin>>a>>b>>m>>n
    int d[n];
    for(int i=0;i<n;i++){
        if(i==1)d[i]=b;
        else {
            d[i]=(a*d[i-1]+b)%m+1;
        }
    }
    sort(n,d);
    set<tuple<int,int,int>>s;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(d[i]!=d[i+1]||d[j]!=d[j+1]||d[k]!=d[k+1]){
                    if(d[i]+d[j]>d[k]&&d[i]+d[k]>d[j]&&d[k]+d[j]>d[i]){
                        s.insert(make_tuple(d[i],d[j],d[k]));
                    }
                }
            }
        }   
    }
    cout<<"số lượng các tam giác tìm được là: "<<s.size()<<endl;
    for(auto x:s)cout<<get<0>(x)<<" "<<get<1>(x)<<" "<<get<2>(x)<<endl;
    return 0;
}