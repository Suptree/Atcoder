#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < K; i++){
        int d;
        cin >> d;
        for(int j = 0; j < d; j++){
            int a;
            cin >> a;
            A[a-1]++;
        }
    }
    int count = 0;
    for(int i = 0; i < N; i++){
        if(A[i] == 0){
            count++;
        }
    }
    cout << count <<endl;

    return 0;
}

