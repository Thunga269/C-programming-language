#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
class Student{
	private:
		string name, id, sinh;
		float GPA;
	public:
		Student(string name){
			this->name = name;
		}
		Student(){
			
		}
		void setName(string name){
			this->name = name;
		}
		void setID(string id){
			this->id = id;
		}
		void setSinh(string sinh){
			this->id = id;
		}
		void setGPA(float GPA){
			this->GPA = GPA;
		}
		string getName(){
			return name;
		}
		string getID(){
			return id;
		}
		string getSinh(){
			return sinh;
		}
		float getGPA(){
			return GPA;
		}
		friend istream& operator>>(istream &is, Student &st){
			getline(is, st.name);
			getline(is, st.id);
			is >> sinh >> GPA;
			return is;
		}
		friend ostream& operator<<(ostream &is, Student &st){
			return os << "B20DCCN001 "<<st.name <<" "<<st.id <<"" <<st.sinh<<" "<<fixed<<setprecision(2) <<st.GPA;
		}
};
void solve(){
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

