#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){

}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double xa, ya, xb, yb, xc, yc;
		double PI = 3.141592653589793238;
		scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xc, &yc);
		double ab = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		double ac = sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
		double bc = sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
		if((ab + bc) > ac && (ab+ac) > bc && bc + ac > ab){
		printf("%.3lf", (ab*ab*bc*bc*ac*ac*PI)/((ab+bc+ac)*(ab+bc-ac)*(ac+bc-ab)*(ab+ac-bc)));
		} else printf("INVALID");
		printf("\n");
	}
}



