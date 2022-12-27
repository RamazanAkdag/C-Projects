#include <iostream>
using namespace std;

class A{
    int x,y;
    public:
        friend void g(A&);
        void k(){

        }
};
// void g(A& a){
//             a.x = 5;
//             a.y = 4;
// }
/*friend fonklar başka bir classın içinde üye olarak bulunamaz*/

class B{
    public:
        friend void g(A& a){
            a.x = 5;
            a.y = 3;
        }
      
        
};
class C{
    public:
        friend void g(A& a){
            a.x = 3;
            a.y = 5;
        }
        
};


int main(){
    C c;
    c.



    return 0;
}