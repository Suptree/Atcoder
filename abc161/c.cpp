#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;


ll aaa(ll n, ll k){
    ll a = n - k;
    if(a == 0){
        return 0;
    }
    if(a < 0){
        a *= -1;
        return min(a,n);
    }

   return aaa(a,k); 
}


int main(){
    ll N,K;
    cin >> N >> K;
//     if(K == 1){
//         cout << 0 << endl;
//         return 0;
//     }
    ll yo = N/K;
    ll ama = N % K;
    if(ama == 0){
        cout << 0 << endl;
        return 0;
    }


    if(yo > 0){
        ll yyy = N - (yo * K);
        cout << min(yyy, -1*(yyy -K)); 
        return 0;
    }
    
    cout << min(N,-1*(N-K)) << endl;
    

    
    return 0;
}

