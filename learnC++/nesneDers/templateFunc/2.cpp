#include <iostream>
#include "string.h"
using namespace std;

template<class T>
T topla(T a, T b) {
    return a + b;
}

template<class T,class N>
T topla(T a, N b) { //N toplada çıktı 2. parametrenin türüne göre çıkar
    return a + b;
}

template<class A>
A yaz(A a, A b) {
    return a + b;
}

template<class A,class B>
void yaz(A a , B b){
    cout<<"a : "<<a<<" b : "<<b<<endl;
}

template<class A,class B>
 void yaz(A a, B b, bool c) {
     cout << "a= " << a << "    b= " << b <<"  c: "<<c<< endl;
}
 
 template<class A, class B,class C>
 void yaz(A a, B b, C c) {
     cout << "a= " << a << "    b= " << b << "  c= " << c << endl;;
 }
 

// int topla(int a, int b) {
//     return a + b;
// }

// float topla(int a, int b) {
//     return a + b;
// }


int main() {
    //cout << topla(3, 5);
    //cout << topla(8.5, 5.9);
    //cout << topla('A', 8.7f); //ASCII kodu
    int x = 7;
    yaz(3, 5.7);
    yaz('A', 8);
    yaz(x, 'a');
    yaz(x, 'a',true);
    //cout << topla("ders", 8.7f); //dizinin adresi ile işlem yapılmaz


    return 0;
}