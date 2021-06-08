#include <bits/stdc++.h>
#include <numeric>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    ll N,K;
    cin >> N >> K;
    vector<ll> H;
    repo(i,N){
        ll h;
        cin >> h;
        H.push_back(h);
    }

    if(N <= K){
        cout << 0 << endl;
        return 0;
    }
    sort(H.begin(), H.end());
    repo(i,K){
        H.pop_back();
    }
    ll ans = 0;
    repo(i,H.size()){
        ans+=H[i];
    }
//     if(H.size() > 0){
//     cout << accumulate(H.begin(),H.end(),0) << endl;
//     }else{
//         cout << 0 << endl;
//     }
    cout << ans << endl; 


    return 0;
}

