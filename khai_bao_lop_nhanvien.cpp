#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
class NhanVien{
	private:
		string maNV = "00001";
		string ten;
		string gioitinh;
		string ngaysinh;
		string diachi;
		string masothue;
		string ngaykihd;
	public:
		void nhap(){
			getline(cin, this->ten);
			//cin.ignore();
			cin >> this->gioitinh >> this->ngaysinh;
			cin.ignore();
			getline(cin, this->diachi);
			//cin.ignore();
			cin >> this->masothue >> this->ngaykihd;
		}
		void xuat(){
			cout << this->maNV<<" "<<this->ten <<" "<<this->gioitinh<< " "<<this->ngaysinh <<" "<< this->diachi <<" "<<this->masothue <<" "<<this->ngaykihd;
		}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

