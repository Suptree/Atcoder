#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    if(S[2] == S[3] && S[4]==S[5]){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;

    return 0;
}

