#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, l = 10e5;
    cin >> n;
    vector<pair<int, int>>q;
    for (int i = 0; i < n; i++){
        int t; cin >> t;
        q.push_back({t, i});
    }
    sort(q.begin(), q.end());
    for (int i = 1; i < n; i++){
        if (q[i].first == q[i-1].first) l = min(abs(q[i].second - q[i-1].second), l); 
    }
    if (l == 10e5) l = -1;
    cout << l;
    return 0;
}