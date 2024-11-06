#include<bits/stdc++.h>

using namespace std;

long long int giaithua(long long int n, long long int m, long long int k){
    if (m > n - m) m = n - m;  
    long long int res = 1;
    for (int i = 0; i < m; ++i) {
        res *= (n - i) % k;
        res /= (i + 1);
    }
    return res;
}

int main(){
    long long int n, m, k;
    cin >> n >> m >> k;
    cout << giaithua(m+n-1, n-1, k);
    return 0;
}