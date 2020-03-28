#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    repo(i,S.size()){
        cout << (S[i] - '0') % 3 << endl;// -'0'をすることで文字コードからint型への変換が行われている.
    }

    return 0;
}

