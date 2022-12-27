#include <iostream>
using namespace std;
#define PI 3.14

class daire{
    int r;
    public:
    daire(int a):r(a){}
    float alan()const;//burada constant olarak tanımlı fonk içinde classın özelliklerinin degerinin degistirilemeyecegini gosterir
    float alan2(){r = 2;return PI*r*r;}

};

float daire::alan()const{

    //alan2();//alan2 isimli fonkda deger ataması yapıldıgı icin const tanımlı fonkun icinde cagıramadık hata verdi
    return PI*r*r;
}

int main(){ 
    daire yeni(3);
    cout<<yeni.alan()<<endl;
    cout<<yeni.alan2()<<endl;




    system("pause");
    return 0;
}