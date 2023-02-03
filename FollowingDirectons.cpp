#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int x = 0, y = 0;
		bool ans = false;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'U') y++;
			if (s[i] == 'D') y--;
			if (s[i] == 'R') x++;
			if (s[i] == 'L') x--;
			if (x == 1 && y == 1) ans = true;
		}
		cout << (ans ? "YES\n" : "NO\n");
	}
}
