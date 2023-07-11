<<<<<<< HEAD

#include <bits/stdc++.h>
using namespace std;
int dem(int n){
    int a[n],b[n];
    a[0]=b[0]=1;
    for (int i = 1; i < n; i++) {
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    return a[n-1]+b[n-1];
}
int main()
{
    int n;
    cin>>n;
    cout<<dem(n);
    return 0;
}
=======

#include <bits/stdc++.h>
using namespace std;
int dem(int n){
    int a[n],b[n];
    a[0]=b[0]=1;
    for (int i = 1; i < n; i++) {
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    return a[n-1]+b[n-1];
}
int main()
{
    int n;
    cin>>n;
    cout<<dem(n);
    return 0;
}
>>>>>>> 7f6bfa47562829dd2542b554e7d4fd4edb8b799d
