#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct SinhVien{
	int stt;
	string hoten, lop, sinh;
	float gpa;
};
void sua(string &s){
	if(s[1] == '/') s.insert(0, "0");
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '/' && s[i+2] == '/'){
			s.insert(i+1, "0");
		} 
	}
}
void nhap(SinhVien ds[50], int N){
	for(int i = 1; i <= N; i++){
		scanf("\n");
		getline(cin, ds[i].hoten);
		scanf("\n");
		cin >> ds[i].lop >> ds[i].sinh;
		cin >> ds[i].gpa;
		ds[i].stt = i;
		sua(ds[i].sinh);
	}
}
void in(SinhVien ds[50], int N){
	for(int i = 1; i <= N; i++) {
		cout << "B20DCCN";
		if(i < 10) cout << "00" << i<<" ";
		else cout << "0" << i<<" ";
		cout<<ds[i].hoten<<" "<<ds[i].lop<<" "<<ds[i].sinh<<" ";
		printf("%.2f", ds[i].gpa);
		cout<<endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

