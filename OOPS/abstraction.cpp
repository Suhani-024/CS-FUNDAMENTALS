#include <iostream>
using namespace std;

class Shape{
    virtual void draw()=0;  //pure virtual class or abstract class

};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"draw a circle"<<endl;
    }

};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}