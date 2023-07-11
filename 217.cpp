<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int n,k,x[100],used[100],cnt;
void Try(int i){
    for (int j = 1; j <= n; j++) {
        if(used[j]==0){
            x[i]=j;
            used[j]=1;
            if(i==k)++cnt;
            else Try(i+1);
            used[j]=0;
        }        
    }
}
int main() {
    cin>>k>>n;
    Try(1);
    cout<<cnt;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int n,k,x[100],used[100],cnt;
void Try(int i){
    for (int j = 1; j <= n; j++) {
        if(used[j]==0){
            x[i]=j;
            used[j]=1;
            if(i==k)++cnt;
            else Try(i+1);
            used[j]=0;
        }        
    }
}
int main() {
    cin>>k>>n;
    Try(1);
    cout<<cnt;
    return 0;
}
>>>>>>> 7f6bfa47562829dd2542b554e7d4fd4edb8b799d
