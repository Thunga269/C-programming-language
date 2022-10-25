#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
struct SoPhuc{
		int thuc, ao;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
	int thuc1 = A.thuc + B.thuc;
	int ao1 = A.ao + B.ao;
	A.thuc = thuc1*thuc1 - ao1*ao1;
	A.ao = 2 * ao1 * thuc1;
	return A;
}
void hien_thi(SoPhuc C){
	cout << C.thuc <<" + "<<C.ao <<"i"<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}

