#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, temp;
    vector<string>arr;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        if (s[i] != '.') temp += s[i];
        else {
            arr.push_back(temp);
            temp = "";
        }
    }
    arr.push_back(temp);
    if (arr.back() == "py") cout << "yes";
    else cout << "no";
    return 0;
}