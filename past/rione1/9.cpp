#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
ll saiki(ll x){
    if(x == 1){
        return 1;
    }
    
    return saiki(x/2)*2 + 1;
}

int main(){
    ll H;
    cin >> H;

   cout << saiki(H) << endl; 

    return 0;
}
