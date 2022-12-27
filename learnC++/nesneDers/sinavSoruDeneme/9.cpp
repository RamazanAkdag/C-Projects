#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void f(B& k){
        B b;
        C o;
        
        
    }
    

/*A B nin friend classı oldugundan b deki private uyelere erişebilri fakat b a nın friend classsı degil o yuzden erişemez*/
};
class B{
    int b;
    public:
    void g(A& a){
        
    }
    friend class A;
};
class C{
    int c;
    public:
    void o(){

    }
    friend class B;

};


int main(){





    return 0;
}