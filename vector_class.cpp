#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Personal{
private:
string name;
int age;
long int phone;
string city;
public:
Personal(){
name="";
age=0;
phone = 0;
city = "";
}
void get_data(){
cout<<"Enter name :- ";
cin>>name;
cout<<"Enter age :- ";
cin>>age;
cout<<"Enter phone number :- ";
cin>>phone;
cout<<"Enter city :- ";
cin>>city;
}
void display(){
cout<<"Name is :- "<<name<<endl;
cout<<"Age is :- "<<age<<endl;
cout<<"Phone number is :- "<<phone<<endl;
cout<<"City is :- "<<city<<endl;
}
void search(vector<Personal> Per){
char ans = 'y';
while(ans=='y'){
string x,c;
long int p;
int a;
vector<Personal>::iterator itr = Per.begin();
cout<<"On what basis you wanna search ?? \n 1.Name \n 2.Age \n 3.Phone Number \n 4.City \n";
int ch;
cout<<"Enter the number of your searching parameter :- ";
cin>>ch;
// int pos=0;
switch(ch){
case 1:
cout<<"Enter name :- ";
cin>>x;
itr = Per.begin();
while(itr!=Per.end()){
if(itr->name==x){
itr->display();
// Per[pos]->display();

}
itr++;
// pos++;
}
break;
case 2:
cout<<"Enter age :- ";
cin>>a;
itr = Per.begin();
while(itr!=Per.end()){
if(itr->age==a){
itr->display();
// Per[pos]->display();

}
itr++;
// pos++;
}
break;


case 3:
cout<<"Enter phone number :- ";
cin>>p;
itr = Per.begin();
while(itr!=Per.end()){
if(itr->phone==p){
itr->display();
// Per[pos]->display();

}
itr++;
// pos++;
}
break;
case 4:
cout<<"Enter city :- ";
cin>>c;
itr = Per.begin();
while(itr!=Per.end()){
if(itr->city==c){
itr->display();
// Per[pos]->display();

}
itr++;
// pos++;
}
break;
}
cout<<"Do you want to continue ??(y/n) :- ";
cin>>ans;
if(ans=='n'){
break;
}
// cin>>ch;
}
}

void sorted(vector<Personal>Per){
char ans = 'y';
while(ans=='y'){
string x,c;
long int p;
int a;
vector<Personal>::iterator itr = Per.begin();
cout<<"On what basis you wanna sort ?? \n 1.Name \n 2.Age \n 3.Phone Number \n 4.City \n";
int ch;
cout<<"Enter the number of your searching parameter :- ";
cin>>ch;
int pos=0;
switch(ch){
case 1:
sort(Per.begin(),Per.end(),[] (const Personal &a, const Personal &b){ return (a.name<b.name);});
// vector<Personal>::iterator itr1 = vecPer.begin();
while(itr!=Per.end()){
itr->display();
cout<<"-------------------------------------"<<endl;
itr++;
}


}
cout<<"Do you want to continue ??(y/n) :- ";
cin>>ans;
if(ans=='n'){
break;
}

}

}

};

int main(){
vector<Personal>vecPer;
Personal *st;



int n;
cout<<"Enter no of student objects you wanna create :- ";
cin>>n;
st = new Personal[n];

for(int i=0;i<n;i++){
   cout<<"Enter data for student "<<i+1<<endl;
   st[i].get_data();
   cout<<endl;
   vecPer.push_back(st[i]);
}
vector<Personal>::iterator itr = vecPer.begin();
while(itr!=vecPer.end()){
itr->display();
cout<<"-------------------------------------"<<endl;
itr++;
}
Personal p;
// p.search(vecPer);
p.sorted(vecPer);



}
