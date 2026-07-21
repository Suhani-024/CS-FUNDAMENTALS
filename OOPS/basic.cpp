#include <iostream>
using namespace std;

class Teacher{
    private:
    double salary;

    public:
    //properites or attributes
    string name;
    string dept;
    
    //methods or member function
    void changedept(string newdept){
        dept=newdept;
    }
     //setter
     void setsalary(double s){
        salary=s;
     }

     //getter
     double getsalary(){
        return salary;

     }

};

int main(){

    Teacher t1; //object
    t1.name="Suhani" ;
    t1.dept="ECE";

    t1.setsalary(25000);

    cout<<t1.name<<endl;

    return 0;
}