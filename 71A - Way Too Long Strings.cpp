#include <bits/stdc++.h>

using namespace std;

int main() {
	int c;
	
	cin >> c;
	
	string str;
	
	for (int b = 0; b < c; b++) {
		cin >> str;
		if (str.length() > 10) {
			cout << str.at(0) << str.length() - 2 << str.back() << endl;
		}
		else {
			cout << str << endl;
		}
	}
  
	return 0;
}
