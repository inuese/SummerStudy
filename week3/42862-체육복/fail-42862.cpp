#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int> student(n); //전체 학생 수 n만큼 초기화

	for (int i = 0; i<lost.size();i++)
	{
		student[lost[i] - 1] += -1; //도난 당한 체육복은 -1
	}
	for (int i = 0; i < reserve.size(); i++)
	{
		student[reserve[i] - 1] += 1; //여분의 체육복은 1
	}

	for (int j = 0; j<student.size();j++)
	{
		if(student[j] == 1)
		{
			if (j - 1 > -1)
			{
				if (student[j-1] == -1)
				{
					student[j]--;
					student[j - 1]++;
				}
			}
			if (j + 1 == student.size())
			{
				if (student[j + 1] == -1)
				{
					student[j]--;
					student[j + 1]++;
				}
			}
		}
	}

	for (int k : student)
	{
		if (k == 0 || k == 1) ++answer;
	}
	return answer;
}