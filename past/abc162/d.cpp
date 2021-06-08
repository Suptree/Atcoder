#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >>N;    
    string S;

    cin >> S;
    int r=0,g=0,b=0;
    for(int i = 0; i <N; i++){
        if(S[i] == 'R'){
            r++;
        }else if(S[i] == 'G'){
            g++;
        }else{
            b++;
        }
    }
    
    int m = min(min(r,g),b);
    bool rt = true;  
    int _r = r -m;
    if(_r == 0){
        rt = false;
    }
    bool gt = true;
    int _g =  g-m;
        if(_g == 0){
        gt = false;
    }

    bool bt = true;
    int _b =  b-m;
    if(_b == 0){
        bt = false;
    }

    int ans = 0;
    bool saisyo = true;
    if(rt){
      ans = m * _r;
      saisyo =false;
    }
    if(gt){
        ans *= _g;
        if(!saisyo){
            ans *=10;
        }
        saisyo = false;
    }
    
    if(bt){
        ans *= _b;
        if(!saisyo){
            ans *=10;
        }
        saisyo = false;
    }


    cout << ans << endl;

    return 0;
}

