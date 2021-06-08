#include <iostream>
using namespace std;

int main()
{
  int H,W,h,w;
  int a,b;

  cin >> H >> W;
  cin >> h >> w;

  a = H - h;
  b = W - w;

  cout << a*b << endl;

}
