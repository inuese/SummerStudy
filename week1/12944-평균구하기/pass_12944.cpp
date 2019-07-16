#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	for (int e : arr) answer += e;
	answer = answer / arr.size();
	return answer;
}