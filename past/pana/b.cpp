#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){


    ll H,W;
    cin >> H >> W;

    ll ans = 0;
    
    if(H == 1 || W == 1){
        cout << 1 << endl;
        return 0;
    }



    ll w = W/2;
    ll w1 = 0;
    if(W%2 == 1){
        w1 = w + 1;
    }else {
        w1 = w;
    }



    ll h = H/2;
    ll h1 = 0;
    if (H % 2 == 1){
    h1 = h +1;
    }else{
        h1 = h;

    }

    ans = h1 * w1;
    ans += h * w;
    cout << ans << endl;
        return 0;
}


