
#include <bits/stdc++.h>
using namespace std;
void sort(int a[],int n){
    for (int i = 0; i < n-1; i++) {
        int tmp=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[tmp])tmp=j;
        }
        swap(a[tmp],a[i]);
    }
}
void check(int a[],int n){
    sort(a,n);
    int res=0,max_count=1,curr_counnt=1,count=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            curr_counnt++;
            count++;
        }
        else{
            if(max_count<curr_counnt){
                max_count=curr_counnt;
                res=a[i-1];
            }
            curr_counnt=1;
        }
    }
    if(max_count<curr_counnt){
        max_count=curr_counnt;
        res=a[n-1];
    }
    cout<< res<<" "<<count;
}
int main()
{
    int n=8;
    int a[n]={4,1,4,1,5,63,4,9};
    check(a,n);
    return 0;
}