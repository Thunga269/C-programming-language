#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct diem{
	double x, y;
};
int n;
double PI = 3.141592653589793238;
struct diem ds[30];
void solve(){
	for(int i = 0; i < 3; i++){
		 cin >> ds[i].x >> ds[i].y;
	}
	double ab = sqrt(pow((ds[0].x-ds[1].x), 2)+pow((ds[0].y-ds[1].y), 2));
	double bc = sqrt(pow((ds[1].x-ds[2].x), 2)+pow((ds[1].y-ds[2].y), 2));
	double ac = sqrt(pow((ds[2].x-ds[3].x), 2)+pow((ds[2].y-ds[3].y), 2));
	if((ab + bc) > ac && (ab+ac) > bc && bc + ac > ab){
		printf("%.3lf", (ab*ab*bc*bc*ac*ac*PI)/((ab+bc+ac)*(ab+bc-ac)*(ac+bc-ab)*(ab+ac-bc)));
		} else cout << "INVALID";
		cout <<endl;
}
int main(){
	cin >> n;
	while(n--){
		solve();
	}
}

