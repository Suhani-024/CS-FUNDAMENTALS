#include <iostream>
using namespace std;

void fxn(){
    //int x=0; value everytime will be  0
    static int x=0; //init statement value will increase
    cout<<"x:"<<x<<endl;
    x++;
}

int main(){
    fxn();
    fxn();
    return 0;
}