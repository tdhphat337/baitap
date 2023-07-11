#include <bits/stdc++.h>
using namespace std;

int dem(string s) {
    set<string> st;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 1; j <= s.length() - i; j++) {
            st.insert(s.substr(i, j));
        }
    }
    return st.size();
}

int main() {
    string s = "abab";
    cout<<dem(s);
    return 0;
}