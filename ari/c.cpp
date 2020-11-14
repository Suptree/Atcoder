#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll N,Y;
    cin >> N >> Y;
    int ans = 0;
    for(int i = 0; i <= N; i++){
        for(int j =0; j <= N-i; j++){
            int z = N - i - j;
//             if(z >= 0 && z <= N){
            int mo = 10000*i + 5000*j + 1000*z;
            
            if(Y == mo){
                cout << i << " "<< j << " " << z << endl;
                return 0;
//             }
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}

