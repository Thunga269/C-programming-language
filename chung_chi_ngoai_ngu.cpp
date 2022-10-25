#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int dem;
	cin >> dem;
	if(dem <= 445) cout << "-1";
	else if(dem >= 450 && dem <= 520) cout << "7";
	else if(dem >= 525 && dem <= 595) cout << "8";
	else if(dem >= 600 && dem <= 725) cout << "9";
	else if(dem >= 730 ) cout << "10"; 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

