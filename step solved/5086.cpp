#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0) {
			break;
		}
		if (b / a > 0) {
			cout << "factor" << "\n";
		}
		else if (a % b == 0) {
			cout << "multiple" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}
	}
}