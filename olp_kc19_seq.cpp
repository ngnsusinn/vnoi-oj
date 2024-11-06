#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int, int>>lr(k);
    for (int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        lr.push_back({x, y});
    }
    return 0;
}   