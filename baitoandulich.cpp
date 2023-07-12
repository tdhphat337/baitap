
#include <bits/stdc++.h>
using namespace std;

int n,total_best=INT_MAX,total,x[100],a[100][100],best[100];
bool used[100];
void show(){
    
    for(int i=0;i<n;i++){
        cout<<best[i]+1<<" -> ";
    }cout<<1<<" Total: "<<total_best<<endl;
    
}
void update(){
    if(a[x[n-1]][0]>0 && total+a[x[n-1]][0]<total_best){
        total_best=total+a[x[n-1]][0];
        for(int i=0;i<n;i++)best[i]=x[i];
    }
}
void Try(int i){
    for(int j=0;j<n;j++){
        if(used[j]==false && a[x[i-1]][j]>0){
            x[i]=j;
            used[j]=true;
            total+=a[x[i-1]][j];
            if(i==n-1)update();
            else Try(i+1);
            used[j]=false;
            total-=a[x[i-1]][j];
        }
    }
}
int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    used[0]=true;
    Try(1);
    show();
    return 0;
}