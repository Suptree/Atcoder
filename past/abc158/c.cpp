#include <iostream>
using namespace std;
int main(){
  int A = 0, B=0;

  cin >> A>> B;
  for(int i = 0; i <= 1000; i++){
    // cout << i <<" : "<< i * 0.08 << ", " << i * 0.1 << endl;
      int a = i * 0.08;
      int b = i * 0.1;
      if((a == A) && (b == B)){
        cout << i << endl;
        return 0;
      }
  }
  cout << -1 << endl;

}
