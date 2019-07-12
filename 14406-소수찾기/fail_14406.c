#include <vector>

using namespace std;
bool primeNum(int n) {
	if (n <= 1) return 0;
	for (int j = 2; j < n; j++) {
		if ((n % j) == 0) {
			return 0;
		}
	}
	return 1;
}
long long solution(int N) {
	long long answer = 0;
	for (int i = 1; i <= N; i++) {
		if (primeNum(i)) answer += i;
	}
	return answer;
}