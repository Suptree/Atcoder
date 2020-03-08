#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
  string S;

  cin >> S;

  int Q = 0;
  cin >> Q;
  int t=0,f=0;
  string c;



  for(int i = 0; i < Q; i++){

    cin >> t;


    if(t == 1){
      std::reverse( S.begin(), S.end() );
    }else{
      cin >> f >> c;

      if(f == 1){
        S.insert(0,c);
      }else{
        S.append(c);
      }
    }

  }
  cout << S << endl;

}
