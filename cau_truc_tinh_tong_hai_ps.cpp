#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct PhanSo{
	long long tu, mau;
};
PhanSo t;
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
	long long k = __gcd(p.tu, p.mau);
	p.tu /= k;
	p.mau /= k;
}
PhanSo tong(PhanSo &p, PhanSo &q){
	t.tu = p.tu * q.mau + q.tu * p.mau;
	t.mau = p.mau * q.mau;
	rutgon(t);
	return t;
}
void in(PhanSo &t){
	cout << t.tu <<"/" << t.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

