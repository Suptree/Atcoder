#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N,M;
    cin >> N >> M;

    int g = 0;

    if(N > 1){
        g = N*(N-1)/2;
    }else{
        g = 0;
    }

    int k = 0;

    if(M > 1){
        k = M*(M-1)/2;
    }else{
        k = 0;
    }
    cout << g+k << endl;
    return 0;
}

