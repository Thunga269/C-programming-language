#include<bits/stdc++.h>
#include<algorithm>
#include<set>
using namespace std;
set <int> s;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
	cin >> n >> m;
	set <int> a;
	set <int> b;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		 a.insert(x);
		 s.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		b.insert(x);
		s.insert(x);
	}
	for(auto v:s) cout << v <<" ";
		s.clear();
		cout << endl;
	for(auto v:a)
		if(b.count(v) == 1 ) cout << v <<" ";
		cout << endl;
		a.clear();
		b.clear();
	}
	return 0;
}

