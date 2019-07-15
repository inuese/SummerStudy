#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	bool answer = true;
	int i = 0;
	if (s.size() == 4 || s.size() == 6) {
		for (char c : s) {
			for (i = 0; i <= 9; i++) { if (c == '0' + i) break; }
			if (i == 10) { return answer = false; }
		}
		return answer = true;
	}
	else return answer = false;
}