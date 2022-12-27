#include <iostream>
using namespace std;


class A{
    public:
       virtual void Func(){
            cout<<"func of A"<<endl;
        }

};
class B:public A{
    public:
        void Func(){
            cout<<"func of B"<<endl;
        }
};

void display(A& aObj){
    aObj.Func();
}


int main(){

    A aobj;
    B bobj;

    display(aobj);
    display(bobj);
    /*virtual fonkların işe yaraması için pointer veya referansla çagırım yapılmalı*/




    return 0;
}