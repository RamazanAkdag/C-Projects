#include <iostream>
using namespace std;


class complex{
    public:
    int reel,sanal;
    complex(int reel,int sanal){
        this->reel = reel;
        this->sanal = sanal;
    }

    //complex operator+(complex);
};

// complex complex::operator+(complex ramo){
//     complex toplam(0,0);
//     toplam.reel = reel + ramo.reel;
//     toplam.sanal = sanal + ramo.sanal;
//     return toplam;
// }
complex operator+(complex r1,complex r2){
    complex toplam(0,0);
    toplam.reel = r1.reel + r2.reel;
    toplam.sanal = r1.sanal + r2.sanal;
    return toplam;
}

ostream& operator<<(ostream& cout, complex obj){
    if(obj.sanal > 0)
        cout<<obj.reel<<" + "<<obj.sanal<<" i "<<endl;
    else if(obj.sanal < 0)
        cout<<obj.reel<<" - "<<-1*obj.sanal<<" i "<<endl;
    else
        cout<<obj.reel<<endl;

}

int main(){

    complex a(1,2);
    complex b(3,4);

    complex c(0,0);
   //c =  a.operator+(b);
    c = a + b;
    //c = a.operator+(b);
    cout<<c.reel<<"+"<<c.sanal<<"i"<<endl;






    return 0;
}