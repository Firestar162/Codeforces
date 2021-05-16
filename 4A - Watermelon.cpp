#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;   // w = weight of watermelon

    cin >> w;   // read w

    if (w == 2){
    	cout << "NO" << endl;   // if w is 2, print "no" (because the only way to split 2 is 1+1)
    }
    else if (w%2==0){
    	cout << "YES" << endl;  // else if w is divisible by 2, print "yes" (because you can split any even number - except 2 - into 2 even integers)
    }
    else {
    	cout << "NO" << endl;   // else print "no" (because the only other numbers are odd, and you can't split an odd number into 2 even integers)
    }
    return 0;

}
