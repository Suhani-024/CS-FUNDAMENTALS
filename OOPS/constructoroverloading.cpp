#include <iostream>
using namespace std;

class Student{
    public:
     string name;


     Student(){
        cout<<"non-parameterized"<<endl;
     }

     Student(string name){
        this->name=name;
        cout<<"parameterized"<<endl;
     }

};

int main(){
    Student s1; // default non parameterized will be called
    Student s2("Suhani");//parameterized will be called
    return 0;
}