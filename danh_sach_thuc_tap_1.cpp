#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct thuctap{
	int stt;
	string maSV, hoten, lop, email, doanhnghiep;
};
int n, q;
struct thuctap ds[10001];
struct thuctap temp;
void solve(){
	for(int i = 1; i <= n; i++){
		scanf("\n");
		cin >> ds[i].maSV;
		scanf("\n");
		getline(cin, ds[i].hoten);
		scanf("\n");
		cin >> ds[i].lop >> ds[i].email >> ds[i].doanhnghiep;
		ds[i].stt = i;
	}
	cin >> q;
	string s;
	for(int i = 1; i <= q; i++){
		scanf("\n");
		cin >> s;
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j <= n; j++)
			if(ds[i].doanhnghiep == s && ds[j].doanhnghiep == s && ds[i].hoten > ds[j].hoten){
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
				}
			}
		for(int i = 1; i <= n; i++){
			if(ds[i].doanhnghiep == s){
				cout <<ds[i].stt<<" "<<ds[i].maSV<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" ";
				cout <<ds[i].email<<" "<<s<<endl;
			}
		}
	}
	
}
int main(){
	cin >> n;
	solve();
}

