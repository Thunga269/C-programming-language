#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
string chuanhoa1(string &s){
	vector <string> m;
	stringstream ss(s);
	string s1, s2;
	while(ss >> s1){
		if(s1[0] >= 'a' && s1[0] <= 'z') s1[0] -= 32;
		for(int i = 1; i < s1.size(); i++){
			if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
		}
		m.push_back(s1);
	}
	for(int i = 0; i < m.size(); i++){
		s2 += m[i];
		s2 += " ";
	}
	return s2;
}
void chuanhoa2(string &s){
	//02/2/2021
	if(s[1] == '/') s.insert(0, "0");
	if(s[4] == '/') s.insert(3, "0");
}
class SinhVien{
	public:
		string hoten;
		string lop;
		string ngaysinh;
		string ma;
		float diem;
		float GPA;
	friend istream &operator>>(istream &input, SinhVien &a){
		getline(cin, a.hoten);
		cin >> a.lop >> a.ngaysinh >> a.GPA;
		a.hoten = chuanhoa1(a.hoten);
		a.ma = "B20DCCN001";
		chuanhoa2(a.ngaysinh);
		return input;
	}
	friend ostream &operator<<(ostream &output, SinhVien &a){
		cout << a.ma <<" "<< a.hoten <<a.lop <<" "<<a.ngaysinh <<" ";
		printf("%.2f", a.GPA);
		return output;
	}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

