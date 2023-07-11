#include <bits/stdc++.h>
using namespace std;

int dem(string s){
    set<char> count;
    for (int i = 0; i < s.length(); i++) {
        count.insert(s[i]);
    }
    return count.size();
}
int dem1(string s){
    int count=0;
    for (int i = 0; i < s.length(); i++) {
        count++;
    }
    return count;
}
int giaithua(string s){
    int kq=1;
    for (int i = 1; i <= dem1(s); i++) kq*=i;
    return kq;
}
int main() {
    string s="ada";
    cout<<giaithua(s)/dem(s);
    return 0;
}
