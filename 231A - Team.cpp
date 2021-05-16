#include <bits/stdc++.h>

using namespace std;

int main() {
	int sc = 0;	// sc = solution count (the number of solutions they are sure on), set this equal to 0 (at the start)
	int c;	// c = number of questions in the contest	
	
	cin >> c;	// read c
	
	for (int i = 0; i<c; i++) {	// repeat the following c times (for each question in the contest):
		
		int p, v, t;	// p = Petya's view on the solution, v = Vasya's view, t = Tonya's view
		
		cin >> p >> v >> t; 	// read p, v and t
		
		if (p+v+t >= 2){	// if the sum of p, v and t is greater than or equal to 2:
			
			sc++;	// increase the solution count by 1 (because if p+v+t = 2, it means that two of them are sure on the solution, and if p+v+t = 3, all of them are sure on the solution)
		}
	}
	
	cout << sc << endl;	// print the solution count
	
	return 0;

}
