#include <iostream>
using namespace std;
class A{
    
    short dizi[5];// short 2 byte yer kaplar 5 li dizi = 10 byte


    /*içi boş bir classtan oluşturulan nesne 1 byte yer kaplar
    diger turlu içindeki veri turlerinin de kapladıgı alanların toplamı kadar yer kaplar*/
    /*fonksiyonlar class icinde yer kaplamaz fonksiyonlar içerisinde oluşturulan locak degiskenler yer kapplamaz
    sadece classa ait özelliklerin veri turlerinin kapladıgı alanlar yer classın boyutunu degistirir
    static fonklar da degistirmez*/
    /*miras alma işlemlerinde miras alan sınıf miras aldıgı sınıfların boyutları toplamı kadar yer kaplar*/

   
    //char b;
    //double c;
    public:
        void ramo(){
            int k;
           // a = a+ 3;
           // cout<<a<<endl;
        }
        int ramol(){
            double c;
            //a = a+ 8/3 + 7;
            //return a;
        }
        static void beko(){
            cout<<"beko beko beko"<<endl;
        }
};
class B:public A{

};
class C:public A{

};
class D:public B,public C{

};
class E:public D,public B{

};

int main(){
    A a;
    D d;
    E e;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    
    






    return 0;
}