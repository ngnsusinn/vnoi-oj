#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, k = "virus";
    int c = 0;
    cin >> s;
    int len = sizeof(string)/sizeof(char);
    if (len < 5) cout << 0;
    else {
        int arr[len];
        fill_n(arr, len, 0);
        for (int i = 0; i < len; i++){
            int j = 0;
            if (s[i] == k[j] && i <= len-4){
                arr[i]++;
                for (++j; j < 5; j++){
                    if (s[i+j] == k[j]) arr[i+j] = arr[i+j-1] + 1;
                    if (arr[i+j] == 5) c++;
                }
            }
        }
        cout << c;
    }
    return 0;
}