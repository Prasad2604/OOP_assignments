#include <iostream>
using namespace std;

class Complex{
private:
	int real;
	int img;
public:
	Complex(){
		real=0;
		img=0;
	}
	Complex(int x,int y){
		real=x;
		img=y;
	}
	Complex operator+(Complex t){
		Complex temp;
		temp.real = real+t.real;
		temp.img=img+t.img;
		return temp;
	}
	Complex operator-(Complex t){
			Complex temp;
			temp.real = real-t.real;
			temp.img=img-t.img;
			return temp;
		}
	Complex operator*(Complex t){
		Complex temp;
		temp.real = (real*t.real)-(img*t.img);
		temp.img = (real*t.img)+(img*t.real);
	}
	void display(string s){
		if(img<0){
			cout<<s<<real<<img<<"i"<<endl;
		}
		else{
			cout<<s<<real<<"+"<<img<<"i"<<endl;
		}

	}

};

int main() {
	int n;
	Complex c1(5,1);
	Complex c2(3,2);
	Complex c3;
	Complex c4;
	Complex c5;
	c3=c1+c2;
	c4 = c1-c2;
	c5 = c1*c2;
	cout<<"Choices :-"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<endl;
	cout<<"Enter your choice :-"<<" ";
	cin>>n;
	switch(n){
	case 1: c3.display("Addition is :- ");
	break;
	case 2: c4.display("Subtraction is :- ");
	break;
	case 3: c5.display("Multiplication is :- ");
	break;
	default : cout<<"Please enter valid choice";
	}
	return 0;
}