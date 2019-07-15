#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	string tmp = "";
	for (string c : completion) {
		int length = participant.size()-1;
		for (string p : participant) {
			if (p == c) {
				tmp = p;
				p = participant[length];
				participant[length] = tmp;
			}
			else answer = p;
		}
		if (participant[length] == c) participant.pop_back();
		else return answer;
	}
}