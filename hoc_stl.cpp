#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector <int> a;
void solve(){
	a = {1, 1, 1};
	for(int &i:a) cout << i;
	//for(auto element : a) cout << element;
	//auto b = a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

