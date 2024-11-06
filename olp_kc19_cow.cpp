#include<bits/stdc++.h>

using namespace std;

long intSqrt(long x, long y, long a, long b){
    if (long(sqrt((x-a)*(x-a)+(y-b)*(y-b))) == sqrt((x-a)*(x-a)+(y-b)*(y-b))) return sqrt((x-a)*(x-a)+(y-b)*(y-b))-1;
    else return sqrt((x-a)*(x-a)+(y-b)*(y-b));
}

int main(){
    //freopen("cow.inp", "r", stdin);
    //freopen("cow.out", "w", stdout);
    long n, a, b;
    long l = 1e18;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++){
        long x, y, r;
        cin >> x >> y >> r;
        long d = intSqrt(x, y, a, b) - r;
        l = min(l, d);
    }
    cout << l;
    return 0;
}