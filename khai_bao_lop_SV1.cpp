#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
class SinhVien{
	public:
		string ten, lop, sinh;
		float GPA;
	void xuat(){
		cout << "B20DCCN001 "
		<<this->ten <<" "<<this->lop <<" "<< this->sinh <<" "<<fixed<<setprecision(2)<<this->GPA;
	}
	void nhap(){
		getline(cin, this->ten);
		getline(cin, this->lop);
		getline(cin, this->sinh);
		cin >> this->GPA;
		if(this->sinh[1] == '/') this->sinh = "0" + this->sinh;
		if(this->sinh[4] == '/') this->sinh.insert(3, "0");
	}
};
void solve(){
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

