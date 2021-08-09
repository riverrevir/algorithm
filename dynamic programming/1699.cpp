#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        dp[i] = i;
        for (int j = 1; j * j <= i; j++) {
            if (i == j) dp[i] = 1;
            else {
                dp[i] = min(dp[i - j * j] + 1, dp[i]);
            }
        }
    }
    cout << dp[n];
}