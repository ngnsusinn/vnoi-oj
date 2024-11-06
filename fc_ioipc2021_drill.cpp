#include<bits/stdc++.h>

using namespace std;

map<string, string>q;

void drill(string question, string answer){
    q[question] = answer;
}

string query(string question){
    return q[question];
}

int main(){
    int n, m;
    cin >> n >> m;
    for (int i =0 ; i < n; i++){
        string question, answer;
        cin >> question >> answer;
        drill(question, answer);
    }
    for (int i = 0; i < m; i++){
        string question;
        cin >> question;
        cout << query(question);
    }
    return 0;
}