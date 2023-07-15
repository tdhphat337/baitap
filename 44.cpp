#include <iostream>
#include <string>
using namespace std;

void backtrack(string s,int n) {
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    backtrack(s+'A',n);
    if(s.empty()||s.back()!='B')backtrack(s+'B',n);
}

int main() {
    int n;
    cin >> n;
    backtrack("", n);
    return 0;
}
