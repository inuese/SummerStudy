//반복문을 사용하는 쪽이 재귀보다 성능이 좋습니다
//재귀를 사용할 경우 시간초과 발생
#include <iostream>
using namespace std;

int d[1000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	d[1] = 1;
	d[2] = 3;
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + (2 * d[i - 2]);
		d[i] %= 10007;
	}
	cout << d[n]<<'\n';
	return 0;
}
