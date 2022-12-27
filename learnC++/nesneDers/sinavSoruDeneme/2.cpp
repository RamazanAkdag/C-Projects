#include <iostream>
using namespace std;
class A{
    private:
        static int a;
    public:
        A(){
            a = 0;
        }
        static void show(){
            a++;
            cout<<a<<endl;
        }
        /*static fonklar o class içindeki yalnızca static uyeleri kullanabilir diger uyeler uzerinde işlem yapamaz*/
};
class B:public A{
    public:


};


int main(){
    B b;
    b.show();





    return 0;
}