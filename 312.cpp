#include <iostream>
using namespace std;

int arr[100];
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
    int curr_count=1,max_count=1,res=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            curr_count++;
        }else{
            if(max_count<curr_count){
                max_count=curr_count;
                res=a[i-1];
            }
            curr_count=1;
        }
    }
    if(max_count<curr_count){
        max_count=curr_count;
        res=a[n-1];
    }
    cout<<res;
}
int main() {
    int N;
    cin >> N;
    int a[N], b[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    int size = 0;
    for (int i = 0; i < N; i++) {
        for (int j = a[i]; j <= b[i]; j++) {
            arr[size] = j;
            size++;
        }
    }
    check(arr,size);
    return 0;
}
