#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct PhanSo{
	long long tu, mau;
};
void nhap(struct PhanSo &p){
	cin >> p.tu >> p.mau;
}
void rutgon(struct PhanSo &p){
	long long k = __gcd(p.tu, p.mau);
	p.tu /= k;
	p.mau /= k;
}
void in(struct PhanSo p){
	cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
