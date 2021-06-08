
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	//入力
	string S;
	cin >> S;

	//処理
	string T = "ATCG";

	int ans = 0; //ATCG文字列の最大長
	int now = 0; //今見ている文字を末尾とするATCG文字列の最大長
	for (int i = 0; i < S.size(); i++)
	{
		bool isATCG = false;
		for (int j = 0; j < T.size(); j++)
		{
			if (S[i] == T[j]) isATCG = true;
		}

		if (!isATCG) {
			//違う場合は0にする
			now = 0;
		}
		else {
			//ATCG文字の場合は、前の文字列に1つ文字を足せる
			now++;
			//最大値を更新する
			ans = max(now, ans);
			// if(now > ans) ans = now; も同じ
		}
	}

	cout << ans << endl;
}
