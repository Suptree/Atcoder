#include <iostream>
using namespace std;
int main() {
  long long N = 0;
  long long A = 0, B = 0;
  cin >> N >> A >> B;

  long long cycle = N / (A + B);

  long long amari = N % (A + B);

  if (cycle == 0) {
    if (N < A) {
      cout << N << endl;
    } else {
      cout << A << endl;
    }
    return 0;
  }
  amari = min(amari,A);
  cout << cycle * A + amari << endl;
}
