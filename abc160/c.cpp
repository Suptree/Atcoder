#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll K;
    ll N;
    cin >> K >> N;
    vector<ll> sa(N);
    vector<ll> A(N);
    ll sum =0;
    //     B
//     ll A;
    for(ll i = 0; i< N; i++){
        cin >> A[i];
        if(i != 0){
            sa[i-1] = A[i] - A[i-1]; 
        } 
    }
    sa[N-1] = K - A[N-1] + A[0];

//     repo(i,N){
//         cout << sa[i] << endl;
//     }    

    sort(sa.begin(),sa.end());
    for(ll i = 0;i  < N-1; i++ ){
        sum += sa[i];
    }
    cout << sum << endl;
    return 0;
}

