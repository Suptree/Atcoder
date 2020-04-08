#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int K;
    cin >> K;
    ll i = 0;
    int count = 0;
    while(true){
        i++;
            std::ostringstream oss;

        oss << i;
        
        string str = oss.str();
//         cout << str << endl;
        if(str.size() == 1){
           count++; 
        }else{
            
        
            int diff = 0;
            bool flag = true;
            for(int j = 1; j < str.size(); j++){
                diff = (str[j] - '0') - (str[j-1]-'0');
                if(abs(diff) > 1){
                    flag = false;
                }
            }

            if(flag){

             count++;
        cout << i << endl;
            }
        }



        if(count == K){
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;
}

