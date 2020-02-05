#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str;
	getline(cin, str);
	str += "\n";
	stack<char> s;
	bool tag = false;
	bool flg = false;
	for (char ch : str) {
		if (ch == '<' && s.empty()) {
			tag = true;
			cout << ch;
			continue;
		}
		else if (ch == '>' && s.empty()) {
			tag = false;
			cout << ch;
			continue;
		}
		if (tag == true) {
			cout << ch;
		}
		else {
			if (ch == ' ' || ch == '\n' || ch == '<' || ch == '>') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch;
				if (ch == '<' || ch == '>') tag = true;
			}
			else {
				s.push(ch);
			}
		}
	}
	return 0;
}
