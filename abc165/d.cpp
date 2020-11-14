#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

ll floar(ll x,ll y){
//     double a = double(x)/double(y);
    ll b = x / y;
//     cout << a << " " << b <<endl;
        
    return b;

}

int main(){

    
    ll A,B,N;
    cin >> A >> B >> N;
   
    for(ll i = 0;; i++){
        ll ans = floar(A*i,B) - A * floar(i,B);

        if(N <= ans){
            cout << i << endl;
            break;    
        }
        cout << ans << endl;

    }
       
//     cout << floar(3,7) << endl;
    return 0;
}

