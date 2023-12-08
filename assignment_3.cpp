#include<iostream>
using namespace std;

class Publication{
    private:
    string title;
    float price;

    public:
    Publication(){
        title = " ";
        price = 0.0;
        cout<<"This is publication class constructor"<<endl;
    }

    void get_details(){
        cout<<"Enter title :- ";
        cin>>title;
        cout<<"Enter price :- ";
        cin>>price;
    }

    void display_details(){
        cout<<"Title is :- "<<title<<endl;
        cout<<"Price is :- "<<price<<endl;
    }

    ~Publication(){
        cout<<"Publication Destructor Called"<<endl;
    }
};

class Book:public Publication{
    private:
    int pg_cnt;
    public:
    Book(){
        pg_cnt=0;
        cout<<"This is Book class constructor"<<endl;
    }
    void get_details(){
        cout<<"Enter page number :- ";
        cin>>pg_cnt;
    }

    void display_details(){
        cout<<"Page count is :- "<<pg_cnt<<endl;
    }
    
    ~Book(){
        cout<<"Book class destructor called"<<endl;
    }
};

class Tape:public Publication{
    private:
    float playing_time;
    public:
    Tape(){
        playing_time=0.0;
        cout<<"This is Tape class constructor"<<endl;
    }
    void get_details(){
        cout<<"Enter playing time :- ";
        cin>>playing_time;
    }
    void display_details(){
        cout<<"Playing time is :- "<<playing_time<<endl;
    }
    ~Tape(){
        cout<<"Tape class destructor called"<<endl;
    }
};

int main(){
    Book b;
    Tape t;
    b.Publication::get_details();
    b.get_details();
    t.get_details();
    return 0;
}