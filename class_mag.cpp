#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
class Student{
	private:
		string id;
		string name;
	public:
		Student(string name){
			this->name = name;
		}
		Student(){
			
		}
		void setID(string id){
			this->id = id;
		}
		void setName(string name){
			this->name = name;
		}
		string getID(){
			return id;
		}
		string getName(){
			return name;
		}
		void nhap(){
			getline(cin, id);
			getline(cin, name);
		}
};
string chuyenMa(int ma){
	stringstream ss;
	ss << ma;
	string str_ma = ss.str();
	while(str_ma.length() < 5){
		str_ma = "0" + str_ma;
	}
	return str_ma;
}
int main(){
	/*Student *st1;
	st1 = new Student("Nguyen Van A");
	st1 -> setID("B20DCCN200");
	cout << st1->getID<<" "<<st1->getname;
	*/
	Student st[10];
	for(int i = 0; i < 10; i++){
		st[i].nhap();
		//st[i].setID(chuyenMa(i+1));
		//st[i].setName("Nguyen Van A");
		cout << st[i].getID() << " " << st[i].getName()<<endl;
	}
}

