
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a,n);
    if(n%2!=0)cout<<a[((n+1)/2)-1];
    else{
        for (int i = a[n/2-1]; i <= a[n/2]; i++) {
            cout<<i<<" ";
        }
    }
    return 0;
}
