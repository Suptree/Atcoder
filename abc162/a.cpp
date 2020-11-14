#include <iostream>
#include <string>
#include <sstream>
#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;

    std::ostringstream oss;

    oss << N;
    string str = oss.str();
    for(int i = 0; i < 3; i++){
        if(str[i]== '7'){
            cout << "Yes" << endl;        
            return 0;
        }

    }
    cout << "No" << endl;
    return 0;
}

