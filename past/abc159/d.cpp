#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

ll choose2(ll n){
    return n*(n-1)/2;
}


int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    ll m = 0;
    repo(i,N) cin >> A[i];
    repo(i,N)  A[i]--;
//     array<ll,1000006> hako;
//     map<int,int> h;
    vector<int> H(N);

    repo(i,N){
        H[A[i]]++;
    }
    ll total =0;
    repo(i,N){
        total += choose2(H[i]);
    }
    repo(i,N){
        ll ans = total;
        ans -=H[A[i]]*(H[A[i]]-1)/2;  
        ans +=(H[A[i]]-1)*(H[A[i]]-2)/2;
        cout << ans << endl;
    }
//     h[1];
//     cout << h[1] << endl;

//     for(ll i = 0; i < N; i++){
//         cin >> A[i];
//         hako[A[i]]++;
// //         h[A[i]]++;    
//         m = max(m,A[i]);
//     }
//     repo(i,N){
//
//     }
//     for(ll i = 0; i < N; i++){
//             int ans = 0;
// //         h[A[i]]--;
//         hako[A[i]]--;
//         for(ll j = 0; j <= m; j++){
//             ans += hako[j]*(hako[j]-1)/2;
// //             ans+= h[j]*(h[j])
//         }
//
//         cout << ans << endl;
//
//         hako[A[i]]++;
//     } 
//     cout << ans << endl;

    return 0;
}

