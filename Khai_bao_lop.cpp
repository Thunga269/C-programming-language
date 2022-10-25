#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
class Student{
	private:
		string id;
		string name;
		int year;
		string lassName;
	public:
		Student(string id){
		this->id = id;
		}
		void setID(string id){
			this->id = id;
		}
		Student(){
		}
		string getID(){
			return id;
		}
		void setName(string name){
			this->name = name;
		}
		string getName(){
			return name;
		}
		void normalizeName(){
			name = name + "1";
		}
};
int main(){
	Student st1;
	st1.setID("B20DCCN001");
	cout << st1.getID() << endl;
	st1.setName("Nguyen Van A");
	st1.normalizeName();
	cout << st1.getName();
	Student st2("B20DCCN002");
	cout << st2.getID();
}

