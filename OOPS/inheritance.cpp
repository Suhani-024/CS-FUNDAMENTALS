#include <iostream>
using namespace std;

class Teacher{
public:
    string name;
    int age;
//parameterized
Teacher(string name,int age){
        this->name=name;
        this->age=age;
    }

   //non parameterized
    Teacher(){
       cout<<"parent constructor"<<endl;
    }

    


};

class Student : public Teacher{
    //name,age,roll no.

    public:
    int rollno;
//parameterized
    Student(string name,int age,int rollno) : Teacher(name, age){
        this->rollno=rollno;
    }


//non parameterized
    Student(){
        cout<<"child constructor"<<endl;

    }

    void getInfo(){
        cout <<"name:" <<name<<endl;
        cout<<"age:" <<age<<endl;
        cout<<"rollno"<<rollno<<endl;
    }


};
int main(){

    Student s1;
    s1.name="Suhani";
    s1.age=21;
    s1.rollno=20;
    s1.getInfo();

    return 0;
}