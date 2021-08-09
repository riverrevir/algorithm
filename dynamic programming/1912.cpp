#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001];
int arr[100001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    dp[0] = arr[0];
    int ans = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans;
}