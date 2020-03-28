#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    map<ll,int> m;

    for(ll i = 0; i < N; i++){
        ll key = 0;
        cin >> key;
        m[key]+=1;
    }
    for(auto & value : m){
        if(value.second > 1){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

