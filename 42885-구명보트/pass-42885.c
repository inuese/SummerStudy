#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	int i = 0, j = 0;
	sort(people.begin(), people.end());
	for (int j = people.size() - 1; j >= i; j--)
	{
		if (people[j] + people[i] <= limit)
		{
			i++;
			answer++;
		}
		else answer++;
	}
	return answer;
}