#include <string>
#include <vector>

using namespace std;
long long passImmigration(long midtime, vector<int> times)
{
	long pass = 0;
	for (int time : times)
	{
		if (time > midtime) continue;
		pass += (midtime / time); //몇 명이 통과할 수 있는지
	}
	return pass;
}
long long solution(int n, vector<int> times) {
	int max = 0;
	long long answer = 0;
	long long passCnt = 0;
	for (int time : times)
	{
		if (time > max) max = time;
	}
	long best = 1;
	long worst = (long)max * n;

	while (best + 1 < worst)
	{
		long midtime = (best + worst) / 2;
		passCnt = passImmigration(midtime, times);
		if (passCnt >= n) worst = midtime;
		else best = midtime;
	}
	answer = worst;
	return answer;
}