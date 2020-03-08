#include <bits/stdc++.h>

using namespace std;

int main(){
    int N = 0;
    cin >> N;

    array<array<int,200000>,200000> table;
    int a=0,b=0;
    for(int i =0; i < N; i++){
        cin >> a;
        cin >> b;
        table[a-1][b-1] = 1;
        table[b-1][a-1] = 1;
    }
    
    
    
    for(int i = 1; i < N; i++){
        for(int j = 0; j < i; j++){
            if(table[i][j] == 0){
                for(int k = 0; k < N; k++){
                    table[i][j] = table[i][k] + table[k][j];
                }
            }
        }
    } 
    
    for(int i= 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

