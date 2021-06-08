#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll N,M;
    cin >> N >> M;

    vector<ll> A(M);
    
    repo(i,M){
        cin >> A[i];
        N -= A[i];
    }
        
    if(N < 0){
        cout << -1 << endl;
    }else{
        cout << N << endl;
    }

    return 0;
}

