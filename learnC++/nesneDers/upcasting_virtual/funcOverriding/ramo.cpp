#include <iostream>

using namespace std;


// class dikdortgen : public sekil
// {
// public:
// int alan();
// };
// class kare : public sekil
// {
// public:
// int alan();
// };
// int dikdortgen::alan()
// { return x * y ; }
// int kare::alan()
class hayvan{
    public:
        hayvan(){

        }
        /*virtual*/ string konus(){
            return "konusamiyorum";
        }

};
class kedi:public hayvan{
    public:
        kedi(){

        }
         string konus(){
            
             return "miyav";
        }
        

};
class kopek:public hayvan{
    public:
        kopek(){

        }
        string konus(){
            return "havhav";
        }
};

class dortgen
{
public: 
int x,y;
virtual int alan(int a,int b) { return a*b; }
};
class ucgen : public dortgen
{
public:
int alan(int a,int b) { return (a*b )/2; }
};
int ramo(dortgen *d){
    return d->x*3;
}
int main(){


    // kedi k;
    // cout<<k.konus()<<endl;   
    // kopek m;
    // cout<<m.konus()<<endl;  

    dortgen *ptr;
    ucgen nesne1;
   ptr = &nesne1;
   cout<<ptr->alan(5,2)<<endl;
   ramo(nesne1);/*upcasting işlemi tip belirsizligi yasanan durumlarda kullanılabilir 
                yani bir fonksiyon yazdık bu fonksiyon dikdortge classından bir parametre alıyor
                bu durumda kare classı icin o fonksiyonu tekrar yazmak yerine kare de bir dikdortgenin alt sınıfı oldugundan
                programa kareyi dogrudan dikdortgenmiş gibi tanıtıp işlem yaptırabiliriz...*/
   ramo(ptr);
   /*dörtgen pointeri ile üçgen nesnesini tuttugumuzda eger virtual ifadesi kullanmazsak sonucta calısacak fonksiyon ilk tanımlanan fonksiyon olacaktır
   baseclassınki*/









    return 0;
}