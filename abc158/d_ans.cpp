#include <algorithm>
#include <bits/stdc++.h>
#include <deque>

using ll = long long;
using namespace std;

int main(){
    
    string s;
    cin >> s;

    deque<char> q;

    for (char c : s) q.push_back(c);
    bool flip = false; //dequeueで前からか後ろからどっちに入れる間か判定するためのFlag
    
    int Q;
    cin >> Q;

    for(int i = 0; i < Q; i++){
        int ty;
        cin >> ty;
        if(ty == 1){
            flip = !flip;
        }else {
            int f;
            char c;
            cin >> f >> c;
            if(flip){//フリップされているときは逆順のとき正順になりまたその逆にもなる
                f = 3-f;
            }
            if(f == 1){
                q.push_front(c);
            }else{
                q.push_back(c);
            }

        }
    }

    if(flip) reverse(q.begin(),q.end());
    string ans;
    for(char c : q) ans+=c;

   cout << ans << endl; 


    return 0;
}

