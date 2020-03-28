#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    array<array<int,3>,3> A;

    repo(i,3){
        repo(j,3){
            cin >> A[i][j];
        }
    }

    int N;
    cin >> N;
    array<array<int,3>,3> a;
    int b;
    repo(i,N){
        cin >> b;
        repo(j,3){
            repo(k,3){
                if(A[j][k] == b){
                    a[j][k] =1;
                }
            }
        }
    }
   if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == 1){
       cout << "Yes" << endl;
       return 0;
   } 
    repo(i,3){
        if(a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] == 1){
            cout << "Yes" << endl;
            return 0;
        }else if(a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] == 1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}

