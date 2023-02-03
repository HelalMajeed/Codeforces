#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a;
		cin >> a;
		int ans = a.length();
		int i = 0, j = n - 1;
		bool check = true;
		while (check) {
			if ((a[i] == '1' && a[j] == '0') || (a[i] == '0' && a[j] == '1'))
				ans -= 2;
			else check = false;
			i++, j--;
		}
		if (ans < 0) ans = 0;
		cout << ans << '\n';
	}
}
