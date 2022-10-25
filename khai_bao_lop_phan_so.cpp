#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau){
			this->tu = tu;
			this->mau = mau; 
		}
		void rutgon(){
			long long UCLN = __gcd(this->tu, this->mau);
			this->tu /= UCLN;
			this->mau /= UCLN; 
			}
		friend istream &operator>>(istream &input, PhanSo &a){
			cin >> a.tu >> a.mau;
			return input;
		}
		friend ostream &operator<<(ostream &output, PhanSo &a){
			cout << a.tu <<"/"<<a.mau;
			return output;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

