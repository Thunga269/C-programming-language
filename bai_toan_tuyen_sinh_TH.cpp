#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
}
int main(){
	string ma, hoten, trangthai;
	float toan, ly, hoa, tongdiem, uutien;
	cin >> ma;
	scanf("\n");
	getline(cin, hoten);
	cin >> toan >> ly >> hoa;
	tongdiem = toan*2 + ly + hoa;
	if(ma[2] == '1') uutien = 0.5;
	else if(ma[2] == '2') uutien = 1;
	else if(ma[2] == '3') uutien = 2.5;
	if(tongdiem + uutien >= 24) trangthai = "TRUNG TUYEN";
	else trangthai = "TRUOT";
	cout << ma <<" "<<hoten<<" "<<uutien<<" ";
	if((float) tongdiem == (int) tongdiem) cout << (int)tongdiem;
	else printf("%.1f", tongdiem);
	cout <<" "<<trangthai;
}

