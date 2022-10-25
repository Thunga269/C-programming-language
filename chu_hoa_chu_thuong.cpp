#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		char c;
		cin >> c;
		if( c >= 'A' && c <= 'Z') c += 32;
		else c -= 32;
		cout << c << endl;
	}
	return 0;
}

