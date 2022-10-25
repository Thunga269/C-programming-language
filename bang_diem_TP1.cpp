#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct SinhVien{
	int stt;
	string ma, hoten, lop;
	float d1, d2, d3;
};
struct SinhVien temp;
void nhap(SinhVien ds[50], int N){
	for(int i = 1; i <= N; i++){
		scanf("\n");
		cin >> ds[i].ma;
		scanf("\n");
		getline(cin, ds[i].hoten);
		scanf("\n");
		cin >> ds[i].lop;
		cin >> ds[i].d1 >> ds[i].d2>> ds[i].d3;
		ds[i].stt = i;
		
	}
}
void sapxep(SinhVien ds[50], int N){
	for(int i = 1; i < N; i++){
		for(int j = i + 1; j <= N; j++){
			if(ds[i].ma > ds[j].ma){
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}
void in(SinhVien ds[50], int N){
	for(int i = 1; i <= N; i++) {
		cout << i <<" "<<ds[i].ma<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" ";
		printf("%.1f %.1f %.1f", ds[i].d1, ds[i].d2, ds[i].d3);
		cout<<endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

