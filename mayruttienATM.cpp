#include <bits/stdc++.h>
using namespace std;
int n=10,x[100],t[100]={200,10,20,20,50,50,50,50,100,100},total,num,used[100],s=390;
void show(){
    for(int i=1;i<=num;i++)cout<<x[i]<<" ";
    exit(1);
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(used[j]==0){
            x[i]=t[j];
            used[j]=1;
            total+=x[i];
            num++;
            if(total==s)show();
            else Try(i+1);
            used[j]=0;
            total-=x[i];
            num--;
        }
    }
}
int main() {
    Try(1);
    return 0;
}