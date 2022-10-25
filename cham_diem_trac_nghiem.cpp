#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int ma;
		cin >> ma;
		char s[15];
		for(int i = 0; i < 15; i++) cin >> s[i];
		//for(int i = 0; i < 15; i++) cout << s[i];
		float dem = 0;
		char s101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char s102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		if(ma == 101){
			for(int i = 0; i < 15; i++){
				if(s[i] == s101[i]) dem ++;
			}
		}else if(ma == 102) {
			for(int i = 0; i < 15; i++){
				if(s[i] == s102[i]) dem ++;
			}
		}
		printf("%.2f", dem * 2/3);
		cout << endl;
	}
	return 0;
}

