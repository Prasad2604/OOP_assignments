#include <iostream>
using namespace std;

class Personal{
private:
	string bg;
	string mobile;
	string add;
	string dob;

	friend class Student;

};
class Student{
private:
	string name;
	int roll_no;
	string Std;
	string div;
	float marks;
public:
	static int cnt;
	Student(){

		name = "";
		roll_no = 0;
		Std = "";
		div = "";
		marks = 0.0;
		cnt++;

	}
	Student(string Name,int Roll,string S,string d,float m){
		this->name = Name;
		this->roll_no = Roll;
		this->Std=S;
		this->div=d;
		this->marks=m;
	}
    inline static int getcnt(){return cnt;}

	void input(Personal &p){
		cout<<"Enter name of student :- ";
		cin>>name;
		cout<<"Enter roll number of student :- ";
		cin>>roll_no;
		cout<<"Enter class of student :- ";
		cin>>Std;
		cout<<"Enter division of student :- ";
		cin>>div;
		cout<<"Enter total marks of student :- ";
		cin>>marks;
		cout<<"Enter date of birth of student :- ";
		cin>>p.dob;
		cout<<"Enter blood group of student :- ";
		cin>>p.bg;
		cout<<"Enter mobile number of student :- ";
		cin>>p.mobile;
		cout<<"Enter address of student :- ";
		cin>>p.add;
	}
	void display(Personal &p){
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Name of student is :- "<<name<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Roll number of student is :- "<<roll_no<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Class of student is :- "<<Std<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Division of student is :- "<<div<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Total marks of student are :- "<<marks<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Date of Birth of Student is :- "<<p.dob<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Blood Group of student is :- "<<p.bg<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Mobile number of student is :- "<<p.mobile<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Address of student is :- "<<p.add<<endl;
		cout<<"---------------------------------------------------"<<endl;
	}
	~Student(){
		cout<<"Inside Destructor"<<endl;
		cnt--;
	}
};
int Student::cnt = 0;

int main() {

	Student s;
	Student s1("Messi",101,"SE-04","04",98.00);
	Personal p;
	cout<<"Values before copy"<<endl;
	s.display(p);

	s = s1;
	cout<<"Values after copy"<<endl;
	s.display(p);
    Student *st;
    int n;
    cout<<"Enter no of student objects you wanna create :- ";
    cin>>n;
    st = new Student[n];

    for(int i=0;i<n;i++){
        cout<<"Enter data for student "<<i+1<<endl;
        st[i].input(p);
        cout<<endl;

    }
    cout<<"Number of student whose data has been collected :- "<<Student::getcnt()<<endl;
    int i;
    char ans = 'y';
    while(ans=='y'){
		cout<<"Enter the student number whose data you wanna see :- ";
		cin>>i;
		if(i-1<=n){
			st[i-1].display(p);
		}
		else{
			cout<<"No such student exist"<<endl;
		}
		cout<<"Do you want to continue(y/n) :- ";
		cin>>ans;
    }
    delete[] st;
    return 0;
}

