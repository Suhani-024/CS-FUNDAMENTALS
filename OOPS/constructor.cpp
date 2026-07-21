#include <iostream>
using namespace std;

class Teacher{
    public:

    string name;
    string dept;
    string subject;

    //non-parmeterized
    Teacher() {
        dept="ECE";
    }
     //parameterized
    Teacher(string n,string d,string sub){
        name=n;
        dept=d;
        subject=sub;
    }

    //copy constructor
Teacher(Teacher &obj){
    cout<<"I AM COPY CONSTRUCTOR"<<endl;
    this->name=obj.name;
    this->name=obj.dept;
    this->name=obj.subject;
}

     //this pointer
    Teacher(string name,string dept,string subject){
       this->name=name;
        this->dept=dept;
        this->subject=subject;
    }
    
    void changedept(string newdept){
        dept=newdept;
    }
    void getinfo(){
        cout<<"Name:"<<name<<endl;
    }
    
};

int main(){
    Teacher t2("Suhani","ECE","computer");
    //t2.getinfo();

    Teacher t1; //constructor call
    t1.name="Suhani" ;
    t1.dept="ECE";

    Teacher t3(t2); //default copy constructor-invoke
    t3.getinfo();

   

    cout<<t1.name<<endl;

    return 0;
}