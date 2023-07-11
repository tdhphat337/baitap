#include <bits/stdc++.h>
using namespace std;

int dem[100];
int main() {
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++) {
        int num=i;
        while(num!=0){
            dem[num%10]++;
            num/=10;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout<<dem[i]<<endl;
    }
    return 0;
}
