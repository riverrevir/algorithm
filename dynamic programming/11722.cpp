#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001]; //n번째까지의 감소 하는 부분 수열의 길이의 최대값
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (arr[i] < arr[j]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);
    cout << ans;
}