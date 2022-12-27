#include <iostream>
using namespace std;
class C{
    public:
        C(){
            cout<<" 1 ";
        }
         C(const C&){
             cout<<"2";
         }
        C& operator=(const C&){
            cout<<"3";
            return *this;
        }
};
class D:public B,public A

int main(){
    C c1;
    C c2 = c2;



    return 0;
}