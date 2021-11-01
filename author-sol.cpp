#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// if the first and last characters are the same, then do nothing
		// otherwise, change the first or last character to match them together
		// and the string will contain AB(s) = BA(s)
		if (s[0] != s.back()) {
			s[0] = s[0] ^ (s[0] ^ s.back());
		}
		cout << s << '\n';
	}
	return 0;
}
