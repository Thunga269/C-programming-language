#include<bits/stdc++.h>
using namespace std;
void doicho(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;
}
int main(){
	int a, b;
	cin >> a >> b;
	doicho(a, b);
	return 0;
}

