#include<bits/stdc++.h>

using namespace std;

int string2int(string s){
    int k = 0;
    for (int i = 1; i < s.size(); i++){
        k = k*10 + (int)s[i]-48;
    }
    return k;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    set<long long int>p;
    priority_queue<long long int>q;
    string s;
    while(getline(cin, s)){
        switch (s[0]){
            case '+':
                if (q.size() < 15000 && p.find(string2int(s)) == p.end()){
                        q.push(string2int(s));
                        p.insert(string2int(s));
                    }
                break;
            
            case '-':
                if (q.size()){
                    int top = q.top();
                    q.pop();
                    p.erase(top);
                }
                break;
        }
    }
    cout << q.size() << '\n';
    int prev = -1;
    while(q.size()){
        if (q.top() != prev){
            prev = q.top();
            cout << q.top() << '\n';
        }
        q.pop();
    }
    return 0;
}