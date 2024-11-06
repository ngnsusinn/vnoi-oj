#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i+=6){
        if (n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n + 1], arrs[n + 1];
    fill_n(arr, n + 1, 0); 
    fill_n(arrs, n + 1, 0); 
    arrs[0] = 0; 
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++){
        arrs[i] = arr[i] + arrs[i - 1];
    }
    for (int i = 1; i <= m; i++){
        int l, r;
        cin >> l >> r; 
        cout << isprime(arrs[r] - arrs[l - 1]) << '\n';
    }
    return 0;
}
