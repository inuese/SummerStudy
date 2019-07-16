#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> newArr;
	for (vector<int> com : commands) {
		newArr.clear();
		for (int i = com[0]-1; i <= com[1]-1;i++) {
			newArr.push_back(array[i]);
		}
		sort(newArr.begin(),newArr.end());
		answer.push_back(newArr[com[2]-1]);
	}
	return answer;
}