
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    int f0=0,f1=1,fn=1;
    if(n<2)return n;
    for (int i = 2; i < n; i++) {
        fn=f0+f1;
        f0=f1;
        f1=fn;
    }
    return fn;
}
int main()
{
    int n=0,A,B;
    cin>>A>>B;
    int fib=0;
    fib=fibo(n);
    while(fib<=B){
        if(fib>=A)cout<<fib<<" ";
        n++;
        fib=fibo(n);
    }

    return 0;
}
