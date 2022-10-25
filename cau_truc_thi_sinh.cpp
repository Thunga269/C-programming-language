#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;
struct ThiSinh{
	string hoten, ngaysinh;
	float diem1, diem2, diem3, tong;
};
void nhap(struct ThiSinh &A){
	scanf("\n");
	getline(cin, A.hoten);
	scanf("\n");
	getline(cin, A.ngaysinh);
	cin >> A.diem1 >> A.diem2 >> A.diem3;
	A.tong = A.diem1 + A.diem2 + A.diem3;
}
void in(struct ThiSinh &A){
	cout << A.hoten << " " << A.ngaysinh << " " << fixed << setprecision(1) << A.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

