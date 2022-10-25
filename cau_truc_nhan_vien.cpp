#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;
struct NhanVien{
	string hoten, gioitinh, ngaysinh, diachi, masothue, ngaykihd;
};
void sua(string &s){
	if(s[1] == '/') s.insert(0, "0");
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '/' && s[i+2] == '/'){
			s.insert(i+1, "0");
		} 
	}
}
void nhap(struct NhanVien &a){
	scanf("\n");
	getline(cin, a.hoten);
	scanf("\n");
	getline(cin, a.gioitinh);
	scanf("\n");
	getline(cin, a.ngaysinh);
	scanf("\n");
	getline(cin, a.diachi);
	scanf("\n");
	getline(cin, a.masothue);
	scanf("\n");
	getline(cin, a.ngaykihd);
	sua(a.ngaysinh);
	sua(a.ngaykihd);
}
void in(struct NhanVien &a){
	cout << "00001" << " " << a.hoten << " " << a.gioitinh << " "<< a.ngaysinh << " " << a.diachi <<" "<< a.masothue <<" " <<a.ngaykihd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

