#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;


int uclid(int m,int n){
    while(true){
        int r = m % n;
        if (r == 0){
            return n;
        }
        return uclid(n,r);
    }
}
int main(){
    
   int K;
  cin >> K; 
  int sum = 0;
    for(int i =1; i <= K; i++ ){
        for(int j = 1; j <= K; j++){
            for(int k = 1; k <= K; k++){
                sum += uclid(uclid(i,j),k);
            }
        }
    }
    
    cout << sum << endl;
    return 0;
}

