#include <iostream>
using namespace std;

class A{
    public:
    int a;
    static int b;
        static void romo(A b){
            b.b++;
            b.a ++;
            
        }
};
C c1;
C c2 = c1;
C c2(c1);

int main(){
    A a1;
    a1.a = 5;
    a1.b = 3;
    A::romo(a1);




    return 0;
}
