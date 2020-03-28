#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    int N,M,K;
    cin >> N >> M >> K;
    vector<pair<int,int>> AB(M);
    vector<pair<int,int>> CD(K);

    
    repo(i,M){
        cin >> AB[i].first >> AB[i].second;
    }
    repo(i,K){
        cin >> CD[i].first >> CD[i].second;
    } 

    vector<vector<int>> table(N);
    
    repo(i,N){
        table[AB[i].first-1][AB[i].second-1] = 1;
        table[CD[i].first-1][CD[i].second-1] = 2;
    }
    repo(i,N){
        int count = 0;
        repo(j,N){
            if(table[i][j] == 0){
                count++;
            }
        }
        cout << count<< " ";
    }    
    cout << endl; 

    return 0;
}

