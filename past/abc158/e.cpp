#include <bits/stdc++.h>
#include <string>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll N,P;
    cin >> N >> P;

    string S;
    cin >> S;
    string s;
    int count = 0;
    repo(i,N){
        for( int j = 1; j <= N - i; j++ ){
            s = S.substr(i,j);
//             cout << num << endl;
            if(num % P == 0) count++;
//             cout <<i << "," << j <<" " << S.substr(i,j) << endl;
                
        }
    }
    cout << count << endl;
    return 0;
}

