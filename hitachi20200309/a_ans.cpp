#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    
    string S;
    cin >> S;
    string ans;
    
    for(int i = 0; i < S.size()/2; i++){
        ans += "hi";
    }   
    if(S == ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

