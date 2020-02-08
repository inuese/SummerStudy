#include <iostream>

using namespace std;

int d[10000];
int tile(int n) {
	if (n <= 2) return n; //input N size : 1 <= n <= 1000
	else{	
		if (d[n] > 0) { return d[n]; }
		else {
			d[n] = tile(n - 1) + tile(n - 2);
			return d[n] % 10007;
		}
	}
}

int main() {
	int n;
	cin >> n;
	cout << tile(n) << '\n';
	return 0;
}
