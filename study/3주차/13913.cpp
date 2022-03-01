#include <bits/stdc++.h>
using namespace std;
int n, k;
int check[200001];
int parent[200001];
vector<int> v;
queue<int> qu;

int cal(int start, int oper) {
    if (oper == 0) {
        return start + 1;
    }
    else if (oper == 1) {
        return start - 1;
    }
    else return start * 2;
}
void go(int start) {
    qu.push(start);
    check[start] = 0;
    while (!qu.empty()) {
        int os = qu.front();

        qu.pop();
        if (os == k) {
            return;
        }
        for (int i = 0; i < 3; i++) {
            int ns = cal(os, i);
            if (ns < 0 || ns>200000) continue;
            if (check[ns] != -1) continue;
            check[ns] = check[os] + 1;
            parent[ns] = os;
            qu.push(ns);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    memset(check, -1, sizeof(check));
    go(n);
    cout << check[k] << "\n";
    for (int i = k; i != n; i = parent[i]) {
        v.push_back(i);
    }
    v.push_back(n);
    reverse(v.begin(), v.end());
    for (auto k : v) cout << k << " ";
}

