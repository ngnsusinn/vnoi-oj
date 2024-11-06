#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (i % 2) s += temp;
    }
    cout << s;
    return 0;
}