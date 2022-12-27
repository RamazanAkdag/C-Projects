#include <iostream>

using namespace std;

class dortgen
{
public: 
//int x,y;
/*virtual*/ int alan(int a,int b) { return a*b; }
/*abstract olmayan bir classtan halihazırda tanımlanmış bir fonksiyon override etmek istediginde
baseclassta virtual ifadesi kullanmak gerekir yoksa baseclass içerisinde tanımlanmış kodlar çalışıp istenmeyen sonuclar dogurabilir*/
};
class ucgen : public dortgen
{
public:
    int alan(int a,int b) { return (a*b )/2; }
};

/*void ramo(dortgen * d){
    cout<<"ramo saboyu sikti..."<<d->alan(3,5)<<endl;
}*/

int main(){

    // dortgen *ptr;
    // ucgen nesne1;
    // ptr = &nesne1;
    //cout<<ptr->alan(3,2);
    //cout<<ptr->alan(3,5);
    dortgen d;
    ucgen u;
    cout<<d.alan(3,5)<<endl;
    cout<<u.alan(3,5)<<endl;


   










    return 0;
}
