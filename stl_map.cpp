#include<iostream>
#include<map>
#include<string>
#include<vector>


using namespace std;

int main(){
	map<string,int>states;
	char ans = 'y';
	string a;
	bool flag=0;
	map<string, int>::iterator itr = states.begin();
	int p;
	while(ans=='y'){
		cout<<"Choices :- \n 1.Enter data of state \n 2.Display data of all states \n 3.Find data of particular state .\n";
		int ch;
		cout<<"Enter your choice :- ";
		cin>>ch;
		switch(ch){
		case 1:
			cout<<"Enter state name :- ";
			cin>>a;
			cout<<"Enter population :- ";
			cin>>p;
			states[a]=p;
			break;

		case 2:
			itr = states.begin();
			while (itr != states.end()) {
				    cout << "State: " << itr->first << ", Population: " << itr->second << endl;
				    ++itr;
			}
			break;
		case 3:

			cout<<"Enter state you wanna find in the map :- ";
			cin>>a;

			itr = states.begin();
			while (itr != states.end()) {
				if(itr->first == a){
					flag=1;
					cout << "State: " << itr->first << ", Population: " << itr->second << endl;
				}

				++itr;
			}
			if(!flag){
				cout<<"State is not present in the map"<<endl;
			}
			break;
		default:
			cout<<"Enter valid choice!!"<<endl;

		}
		cout<<"Do you want to continue (y/n) ??:- ";
		cin>>ans;
	}

	return 0;


}