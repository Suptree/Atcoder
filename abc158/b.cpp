#include <iostream>
using namespace std;
int main() {
  int N = 0;
  int A = 0, B = 0;
  cin >> N >> A >> B;

  int cycle = N / (A + B);

  int amari = N % (A + B);

  if (cycle == 0) {
    if (N < A) {
      cout << N << endl;
    } else {
      cout << A << endl;
    }
    return 0;
  }

  cout << cycle * A + amari << endl;
}
