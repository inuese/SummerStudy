#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	string str;
	int result = 0;

	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			s.push(i);
		}
		else {
			if ((s.top()+1) == i) {
				s.pop();
				result += s.size();
			}
			else {
				s.pop();
				result += 1;
			}
		}
	}

	cout << result << '\n';

	return 0;
}
