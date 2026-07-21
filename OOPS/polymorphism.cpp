#include <iostream>
using namespace std;

//function overriden
class Person{
    public:

    string name;

    void show(){
        cout<<"parent class"<<endl;
    }
    virtual void show1(){
        cout<<"hello from parent class"<<endl;
    }

};
class Student :public Person{
    public:

    void show(){
        cout<<"child class"<<endl;
    }
    void show1(){
        cout<<"hello from child class"<<endl;
    }


};

int main(){
    Student s1;
    s1.show();
    return 0;
}