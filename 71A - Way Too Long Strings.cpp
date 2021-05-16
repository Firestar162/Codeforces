#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; 	// n = number of words that are going to be input
	
	cin >> n;  // read n
	
	string str;  // str = the word that is going to be input
	
	for (int i = 0; b < n; i++) {	// repeat the following n times
		
		cin >> str;	// read str
		
		if (str.length() > 10) {	// if the number of letters in str exceeds 10:
			cout << str.at(0) << str.length() - 2 << str.back() << endl;	// print the first letter, then the number of letters between the first and last letters, then the last letter
		}
		
		else {	
			cout << str << endl;	// else simply print str, because the number of letters will be less than 10
		}
	}
  
	return 0;
}
