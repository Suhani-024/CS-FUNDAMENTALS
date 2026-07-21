#include <iostream>
using namespace std;

class Teacher{
    private:
    double salary;   //data hiding

    public:

    string name;
    string dept;
    
    
    void changedept(string newdept){
        dept=newdept;
    }
     

     

};

int main(){

    Teacher t1; //object
    t1.name="Suhani" ;
    t1.dept="ECE";

    

    cout<<t1.name<<endl;

    return 0;
}