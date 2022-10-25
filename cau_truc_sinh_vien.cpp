#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;
struct SinhVien{
	string hoten, lop, ngaysinh;
	float GPA;
};
void nhap(struct SinhVien &a){
	scanf("\n");
	getline(cin, a.hoten);
	scanf("\n");
	getline(cin, a.lop);
	scanf("\n");
	getline(cin, a.ngaysinh);
	cin >> a.GPA;
	if(a.ngaysinh[1] == '/') a.ngaysinh.insert(0, "0");
	for(int i = 0; i < a.ngaysinh.size(); i++){
		if(a.ngaysinh[i] == '/' && a.ngaysinh[i+2] == '/'){
			a.ngaysinh.insert(i+1, "0");
		} 
	}
}
void in(struct SinhVien &a){
	cout << "B20DCCN001" << " " << a.hoten << " " << a.lop <<" "<< a.ngaysinh << " " << fixed << setprecision(2) << a.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

