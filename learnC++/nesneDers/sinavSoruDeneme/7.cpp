#include <iostream>
using namespace std;
class A{
    public:
        virtual void f(){
            cout<<" A "<<endl;
        }

};
class B: public A{
    public:
        void f(){
            cout<<" B "<<endl;
        }
};

void g(A& a){
    a.f();
}

int main(){
    B b;
    g(b);
    int arr[10];
    int *array = new int[10];
    int **array2 = new int* [10];




    return 0;
}