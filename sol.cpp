#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a[500], n, p;
	cin >> n >> p;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int e = 0, h = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] >= p / 2) e++;
		else if(a[i] <= p / 10) h++;
	}
	if(e == 1 && h == 2) cout << "yes";
	else cout << "no";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case(); 
	}
	//test_case();
	return 0;
}
