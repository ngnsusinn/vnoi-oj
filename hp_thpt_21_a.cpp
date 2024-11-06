#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (!(s[i] < 'A' || s[i] > 'z' || (s[i] > 'Z' && s[i] < 'a'))){
            cout << s[i];
        }
    }
    return 0;
}