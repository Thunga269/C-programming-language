#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n, m;
	cin >> n;
	int a[n+1][n+1];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	cin >> m;
	int b[m+1][m+1];
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= m; j++)
			cin >> b[i][j];
	for(int i = 1; i <= n/m; i++){
		for(int j = 1; j <= n/m; j++){
			for(int x = (i - 1)*m+1; x <= (i-1)*m + m; x++)
				for(int y = (j - 1)*m+1; y <= (j-1)*m + m; y++){
					a[x][y] *= b[x-(i-1)*m][y-(j-1)*m];
				}
			}
		}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
		cout<<  a[i][j] <<" ";
		cout << endl;
	}
}



