#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	int flag = 1;
	int count = 0;
	int check = 0;

	for (int i = 0; i < skill_trees.size(); i++) {
		string com = skill_trees[i];
		for (int j = 0; j < com.size(); j++) {
			int DM = skill.find(com[j]);
			if (DM < 0 || DM > 30)	continue;
			else if (DM != check) {
				flag = 0;
				break;
			}
			else check++;
		}
		if(flag) count++;
		check = 0;
		flag = 1;
	}
	answer = count;
	return answer;
}
