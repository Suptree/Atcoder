#include <algorithm>
#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    string S;

    cin >> S;

    string a = S;
    
    reverse(a.begin(),a.end());    
    if(S!=a){
        cout << "No" << endl;
        return 0;
    }

    int N = S.size();
    string fs;
    repo(i,(N-1)/2){
        fs.push_back(S[i]);

    }
    string bfs = fs;
    reverse(bfs.begin(),bfs.end());
    if(fs != bfs){
        cout << "No" << endl;
        return 0;
    } 

    string bs;
    for(int i = (N+3)/2 - 1; i < S.size();i++){
        bs.push_back(S[i]);
    }
    string bbs = bs;
    reverse(bbs.begin(),bbs.end());
    if(bs !=  bbs){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;


    return 0;
}

