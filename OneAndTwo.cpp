#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	long long t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		vector<long long> a(n);
		for (long long &i : a)
			cin >> i;
		long long twos = count(a.begin(), a.end(), 2);
		long long ans = 0;
		if (twos == 0) cout << '1' << '\n';
		else if (twos & 1 ^ 1) {
			bool run = true;
			long long cnt = 0;
			long long i = 0;
			while (run) {
				if (a[i++] == 2) cnt++;
				if (cnt == twos / 2) run = false;
				ans++;
			}
			cout << ans << '\n';
		}
		else cout << "-1\n";
	}
}
