#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		string s = "codeforces";
		char c;
		cin >> c;
		bool ans = false;
		for (int i = 0; i < s.length(); i++) {
			if (c == s[i]) {
				ans = true;
			}
		}
		cout << (ans ? "YES\n" : "NO\n");
	}
}
