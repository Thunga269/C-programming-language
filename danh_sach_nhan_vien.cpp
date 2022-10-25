#include<bits/stdc++.h>
using namespace std;
int k = 1;
struct NhanVien{
	string ten, gioitinh, ngaysinh, diachi, mathue, ngaykihd;
	int ma;
};
struct NhanVien ds[50];
void sua(string &s){
	if(s[1] == '/') s.insert(0, "0");
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '/' && s[i+2] == '/'){
			s.insert(i+1, "0");
		} 
	}
}
void nhap(NhanVien &a){
	scanf("\n");
	getline(cin, a.ten);
	scanf("\n");
	getline(cin, a.gioitinh);
	scanf("\n");
	getline(cin, a.ngaysinh);
	scanf("\n");
	getline(cin, a.diachi);
	scanf("\n");
	getline(cin, a.mathue);
	scanf("\n");
	getline(cin, a.ngaykihd);
	a.ma = k;
	k++;
	sua(a.ngaysinh);
	sua(a.ngaykihd);
}
void inds(NhanVien ds[50], int N){
	for(int i = 0; i < N; i++){
		if(ds[i].ma < 10) cout << "0000";
		else cout << "000"; 
		cout << ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].gioitinh<<" "<<ds[i].ngaysinh<<" "<<ds[i].diachi<<" ";
		cout <<ds[i].mathue<<" "<<ds[i].ngaykihd;
		cout << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
