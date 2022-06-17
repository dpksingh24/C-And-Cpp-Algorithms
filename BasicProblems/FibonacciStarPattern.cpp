#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a = 1, b = 1, c = 2;
	cout<<"* \n* *\n";
	for(int i=1; i<=3; i++) {
	
		a = b;
		b = c;
		c = a + b;
			
		for(int j=1; j<=c; j++) {
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
