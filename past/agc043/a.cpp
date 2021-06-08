#include <array>
#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int H,W;
    cin >> H >> W;
//     H--;W--;
    vector<string> S(H);    
//     vector<vector<string>> s(H, vector<string>(W));
    vector<vector<int>> table(H, vector<int>(W));
//     array<array<int,100>,100> table;
    
    repo(i,H){
        cin >> S[i];
    } 
    int cost = 0; 
    bool flag = false;
    repo(i,H){
        repo(j,W){
//             cout << S[i][j];
            if(i == 0 && j==0){
                cost = 0;
            }else if(i == 0){
                cost = table[i][j-1];
              
            }else if(j == 0){
                cost = table[i-1][j];
            }else{ 
                cost = min(table[i-1][j],table[i][j-1]);
            }

            if(flag){
               if(S[i][j] == '.'){
                   cost++;
//                    flag = !flag;
               } 
            }else{
                if(S[i][j] == '#'){
                    cost++;
//                     flag = !flag;
                }
            }

            table[i][j] = cost;
        }
    }
    cout << table[H-1][W-1] << endl;    
    return 0;
}

