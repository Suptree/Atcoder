#include <iostream>
// #include <algorithm>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int maxl = 0, minr = 100005;
	for (int i = 0; i < m; ++i) {
		int l, r; cin >> l >> r;
		maxl = max(maxl, l);
		minr = min(minr, r);
	}
	if (maxl <= minr)cout << minr - maxl + 1 << endl;
	else cout << 0;

	return 0;
}
