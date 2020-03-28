#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    int N,M;
    cin >> N >> M;

    array<int,3> S;
    S.fill(-1);
    int s,c;
    for(int i = 0; i < M; i++){
        cin >> s >> c;
        if(N > 1 && s == 1 && c == 0){
             cout <<  -1 << endl;
             return 0;
        }

        if(S[s-1] != -1){
            if(S[s-1] != c){

             cout <<-1 << endl;
             return 0;
            }
        }

        S[s-1] = c;

    }

    repo(i, N){
        if(i == 0){
            if(N == 1){
                cout << S[i] << endl;
                return 0;
            }else{
            
                cout << max(S[i],1);
                continue;
            }
        }
        cout << max(S[i],0);
    }
    cout << endl;
    

    return 0;
}

