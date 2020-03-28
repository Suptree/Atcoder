#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;

//     vector<int> P(N);
    
    ll min = 10000005;
    ll ans = 0;
    repo(i,N){
//         cin >> P[i];
        ll p;
        cin >> p;
        
        if(min > p){
            ans++;
            min = p;
        } 

    }
//     int ans = 0;
//     for(int i = 0; i < N; i++){
//         bool ok = true;
//         for(int j = 0; j < i; j++){
//            if(P[i] >  P[j]){
//                ok = false;
//            } 
//
//         }
//         if(ok) ans++;
//     }
    cout << ans << endl;
    return 0;
}

