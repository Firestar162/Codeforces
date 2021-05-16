#include <bits/stdc++.h>

using namespace std;

int main() {
	int sc = 0;
	int c;
	
	cin >> c;
	

	
	for (int i = 0; i<c; i++) {
		
		int x, y, z;
		
		cin >> x >> y >> z;
		
		if (x+y+z >= 2){
			sc++;
		}
	}
	
	cout << sc << endl;
	
	return 0;

}
