#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int K, S;
    cin >> K >> S;
    int ans = 0;
    for(int i = 0; i <= K; i++){
        for(int j = 0; j <=K; j++){
            int a = S - i - j;
            if(a <= K && 0 <= a) ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}

