#include <bits/stdc++.h>
#include <cstdio>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    double L;
    cin >> L;
//     double a = 20000.0;
//     L *= a;
    double ans = L/3.0;
//     ans /= a;
//     cout << ans*ans*ans << endl;
    double aaa = ans*ans*ans;
//     printf("%.15lf", aaa);
//     
//
//     printf("%0.lf",ans);

    cout << std::fixed << std::setprecision(15) << aaa << endl;
printf("%.10f\n", aaa);
    return 0;
}

