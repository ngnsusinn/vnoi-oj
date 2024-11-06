#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

void factorize(set<int>&f, long long n){
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            if (i != 2 && i != 5) f.insert(i);
            n /= i;
        }
    }
    if (n > 1 && n != 2 && n != 5) f.insert(n);
}

string fraction(long long a){
    set<int>f;
    factorize(f, a);
    return (f.size()) ? "repeating" : "finite";
}

long long gcd(int a, int b){
    while (b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        long long a1 = 1, a2, b1 = 1, b2;
        for (int j = 0; j < n; j++){
            cin >> a2;
            a1 *= a2;
        }
        for (int j = 0; j < n; j++){
            cin >> b2;
            b1 *= b2;
        }
        long long g = gcd(a1, b1);
        a1 /= g;
        b1 /= g;
        cout << fraction(b1) << '\n';
    }
    return 0;
}