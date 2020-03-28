#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    ll ans = 1000000000;
//     int x = 0;
    vector<int> X(N);
    repo(i,N){
        cin >> X[i];
    }
    for(int p = 1; p <= *max_element(X.begin(),X.end()); p++){
        ll kari = 0;
        for(int i = 0; i < N; i++){
//              if(kari > ans) continue;

             kari += pow(X[i]-p,2);
        }      
        ans = min(kari, ans);
    }

    cout << ans << endl;
    return 0;
}

