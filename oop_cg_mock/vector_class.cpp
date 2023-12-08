#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Personal{
    private:
    string name;
    int age;
    long int mb_no;

    public:
    Personal(){
        name=" ";
        age=0;
        mb_no=0;
    }
    Personal(string name,int age,long int mb_no){
        this->name=name;
        this->age=age;
        this->mb_no=mb_no;
    }
    void get_data(){
        cout<<"Enter your name :- ";
        cin>>name;
        cout<<"Enter your age :- ";
        cin>>age;
        cout<<"Enter mobile number :- ";
        cin>>mb_no;
    }
    void display(){
        cout<<"Name is :- "<<name<<endl;
        cout<<"Age is :- "<<age<<endl;
        cout<<"Mobile number is :- "<<mb_no<<endl;
    }
    

};

int main(){
    vector<Personal>vec;
    
    int n;
    cout<<"Enter number of students :- ";cin>>n;
    // Personal* per = new Personal [n];
    // for(int i=0;i<n;i++){
    //     vec.push_back(per[i]("Prasad",19,989028065));
    // }
    
    vec.push_back(p);



}