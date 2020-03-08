#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;

    cin >> S;

    bool ok =true;
    if(S.size()%2 == 1){
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < S.size()-1; i= i+2){
        if(S.at(i)=='h' && S.at(i+1)=='i'){
            continue;
        }else{
            ok = false;
            break;
        }
    }
    if(ok){

    
    cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}

