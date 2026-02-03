#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
	string s;
	cin >> s;

	int n = s.size();

	if (n == 1) {
		cout << n << endl;
		return;
	}

	bool found = false;

	int blocks = 1;

	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1]) {
			blocks++;
		}

		if (s[i] == '1' && s[i - 1] == '0') {
			found = true;
		}
	}

	if (found) {
		cout << --blocks << endl;
		return;
	}

	cout << blocks << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}