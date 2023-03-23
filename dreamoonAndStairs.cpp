#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n < m) {
        cout << "-1" << endl;
        return 0;
    } else if (n == m) {
        cout << n << endl;
        return 0;
    }
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-2]+1;
    }
    if (dp[n]%m == 0) {
        cout << dp[n] << endl;
    } else {
        while (dp[n]%m != 0) {
            dp[n]++;
        }
        cout << dp[n] << endl;
        
    }
}