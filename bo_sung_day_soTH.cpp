#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int a[205];
void solve(){
}
int main(){
	int n, x, check = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		a[x] = 1;
	} 
	for(int i = 1; i <= x; i++){
		if(a[i] == 0){
			cout << i << endl;
			check = 1;
		}
	}
	if(!check) cout <<"Excellent!";
	return 0;

}

