//============================================================================
// Name        : assignment-4.cpp
// Author      : Prasad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

class Person{
char name[20];
long int m_no;
char adress[50];
public:
void get_data(){
cout<<"Enter Name :- ";
cin>>name;
cout<<"Enter mobile number :- ";
cin>>m_no;
cout<<"Enter address :- ";
cin>>adress;
}
void put_data(){
cout<<"Name is :- "<<name<<endl;
cout<<"Mobile Number is :- "<<m_no<<endl;
cout<<"Address is :- "<<adress<<endl;
}
};


int main() {
Person p;
char ans = 'y';
do{
p.get_data();
ofstream out("person.txt",ios::ate);
out.write(reinterpret_cast<char*>(&p),sizeof(p));
out.close();
ifstream in("person.txt",ios::binary);
in.read(reinterpret_cast<char*>(&p),sizeof(p));
p.put_data();
in.close();
cout<<"Do you want to continue (y/n)?? :- ";
cin>>ans;
}while(ans=='y');



return 0;
}