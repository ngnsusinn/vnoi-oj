#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, int>w;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        w[t]++;
    }
    int a[w.size()+1];
    a[0] = 0;
    for (int i = 1; i < w.size(); i++){
        a[i] = n*i - w[i-1]*(i-1);
    }
    for (int x : a) cout << x << " ";
    cout << '\n';
    for (auto x : w) cout << x.first << " " << x.second << "\n";
    return 0;
}