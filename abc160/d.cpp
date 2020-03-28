#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> L(N,vector<int>(N));
    int X,Y;

    cin >> X >> Y;
    X--;
    Y--;
    repo(i,N){
        L[i][i+1] = 1;
    } 
    L[X][Y] = 1;

//     repo(i,N){
//         repo(j,N){
//             cout << L[i][j] << " ";
//         }
//         cout << endl;
//     }
    for(int i = 0; i < N-1;i++){
        for(int j=i+1; j <N; j++){
//             if(L[i][j] != 0) continue;
            for(int k = 0; k < N; k++){
                if(i == k || j == k) continue;
                if(L[i][j] == 0 && L[i][k]*L[k][j] != 0){
                    L[i][j] = L[i][k] + L[k][j];
                }                
                else if( L[i][k]*L[k][j] != 0){

                      L[i][j] =  min(L[i][k] + L[k][j],L[i][j]);
                }
            }            
        }
    }
        repo(i,N){
        repo(j,N){
            cout << L[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> ANS(N);
    for(int i = 0; i < N-1; i++){
        int count = 0;
        for(int j=i+1; j < N; j++){
            
//             if(L[i][j] == i+1)
//                 count++;
            ANS[L[i][j]]++; 
        }
    }
    
    for(int i= 1; i < N; i++){
        cout << ANS[i] << endl;
    }

    return 0;
}

