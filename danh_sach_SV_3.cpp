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
void fix(string &s){
	string s1, s2;
	stringstream ss(s);
	while(ss >> s1){
		if(s1[0] >= 'a' && s1[0] <= 'z') s1[0] -= 32;
		for(int i = 1; i< s1.size(); i++)
			if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
		s2 += s1;
		s2 += ' ';
	}
	s = s2;
}
void nhap(SinhVien ds[50], int N){
	for(int i = 1; i <= N; i++){
		scanf("\n");
		getline(cin, ds[i].hoten);
		//scanf("\n");
		cin >> ds[i].lop >> ds[i].sinh;
		cin >> ds[i].gpa;
		ds[i].stt = i;
		sua(ds[i].sinh);
		fix(ds[i].hoten);
	}
}
void sapxep(SinhVien ds[50], int N){
	for(int i = 1; i < N; i++){
		for(int j = i + 1; j <= N; j++){
			if(ds[i].gpa < ds[j].gpa){
				swap(ds[i], ds[j]);
			}
		}
	}
}
void in(SinhVien ds[50], int N){
	for(int i = 1; i <= N; i++) {
		cout << "B20DCCN";
		if(ds[i].stt < 10) cout << "00" << ds[i].stt <<" ";
		else cout << "0" << ds[i].stt <<" ";
		cout<<ds[i].hoten<<ds[i].lop<<" "<<ds[i].sinh<<" ";
		printf("%.2f", ds[i].gpa);
		cout<<endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
