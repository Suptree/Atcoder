#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll N,M;
    cin >>N >> M;
    vector<ll> H(N);

    for(ll i = 0; i < N; i++){
        cin >> H[i];
    }
    vector<vector<ll>> m(N);
    for(ll i = 0;i < M; i++){
        ll A,B;
        cin >> A >> B;
        m[A-1].push_back(H[B-1]);
        m[B-1].push_back(H[A-1]);
    }
    ll count = 0;
    for(ll i = 0; i < N; i++){
        bool over = false;
//         if(m[i].size() == 0) count++;
//         cout << "展望" << i << " " << H[i] << endl; 
        for(ll j = 0; j < m[i].size(); j++){
//             cout << "比較" << m[i][j] << endl;
            if(H[i] <= m[i][j]){
//                 cout << "Over" << endl;
                over = true;
            }
        }
        if(over == false){
            count++;
//             cout << "プラス" << endl;
        }
    }

    cout << count << endl;
    return 0;
}

