#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
	    int i=0;
		string a, b="", k;
		getline(cin ,a);
		for( i=0; i<a.size(); i++){
			if(a[i]<'0'||a[i]>'9'){
				a[i]=' ';
			}
		}
		stringstream s(a);
		while(s>>k){
			b=b+k;
		}
		if(b[0]=='8'&&b[1]=='4'){
			cout << 0;
			for(int i=2; i<b.size(); i++){
				cout << b[i];
			}
		}else{
			cout << b;
		}
		cout << endl;
	}
}
/*
5
0946 940 087
0946-940-087
0946.940.087
8497878782
+8464661316
*/


