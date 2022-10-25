#include<bits/stdc++.h>
using namespace std;

struct sv{
	string msv;
	string ten;
	int luong;
	int so_cong;
	string cv;
};

int main(){
	struct sv a;
	a.msv = "NV01";
	getline(cin, a.ten);
	cin >> a.luong >> a.so_cong;
	cin.ignore();
	cin >> a.cv;
	a.luong *= a.so_cong;
	long thuong, pc, tn, k;
	if(a.so_cong>=25){
		k=20;
	}
	if(a.so_cong<22){
		k=0;
	}
	if(a.so_cong>=22 && a.so_cong<25){
		k=10;
	}
	thuong = k * a.luong;
	thuong /=100;
	
	if(a.cv == "GD")	pc = 250000;
	if(a.cv == "PGD")	pc = 200000;
	if(a.cv == "TP")	pc = 180000;
	if(a.cv == "NV")	pc = 150000;
	
	cout << a.msv <<" ";
	cout << a.ten<<" ";
	cout << a.luong<<" ";
	cout << thuong <<" ";
	cout  << pc <<" ";
	cout << a.luong + thuong + pc;
}


