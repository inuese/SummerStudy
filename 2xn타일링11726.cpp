//시간초과 오답 -> memoization을 적용하면 해결할 수 있을 것 같다.
#include <iostream>

using namespace std;

int d[10000];
int tile(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	d[n] = tile(n - 1) + tile(n - 2);
	return d[n];
}

int main() {
	int n;
	cin >> n;
	cout << tile(n) << '\n';
	return 0;
}
