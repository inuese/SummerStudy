#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "김서방은 ";
	int cnt = 0;
	for (string e : seoul) {
		if (e == "Kim") break;
		else cnt++;
	}
	answer += to_string(cnt);
	answer += "에 있다";
	return answer;
}