#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    int sum_vote = 0;
    repo(i,N){
        cin >> A[i];
        sum_vote += A[i];
    }
    
    int count = 0;
    repo(i,N){
        if(A[i] >= sum_vote*(1.0/(4.0*M))){
            count++;
        }
    }
    if(count >= M){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}

