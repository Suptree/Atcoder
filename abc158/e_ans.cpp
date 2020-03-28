#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    
    int n,p;
    cin >> n >> p;

    string s;
    cin >> s;

    if(10%p == 0){// 2または5
        ll ans = 0;
        repo(r,n){
            if((s[r] - '0') % p == 0)//この桁の数字がpで割り切れるとき
                ans += r + 1;//選び方の通り数
        }
        cout << ans << endl;
        return 0;
    }

    vector<int> d(n+1);
    int ten = 1;
    for (int i = n-1; i >= 0; --i){
        int a = (s[i]-'0') * ten % p;
        d[i] = (d[i+1]+a) % p;

    }
       

    return 0;
}

