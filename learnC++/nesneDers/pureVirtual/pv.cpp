#include <iostream>
using namespace std;


class animal{
    public:
        virtual void talk() = 0;//bu şekilde fonksiyon tanımlarsan bu fonksiyona pure virtual denir
        /*bir sınıfta bi tane bile pure virtual function varsa bu sınıf abstract sınıf olur*/

};
class kedi:public animal{
    public:
        void talk(){
            cout<<"miyav miyav"<<endl;
        }
};
class kopek:public animal{
    public:
        void talk(){
            cout<<"hav hav"<<endl;
        }
};
int main(){
    kedi *k = new kedi();
    kopek *kk = new kopek();

    animal *animals[] = {k,kk};
    /*soyut sınıftan obje olusturuamaz fakat pointer olusturulabilir o pointera upcasting yöntemiyle türetilmiş sınıflardan objeler gönderilebilir*/

    /*obje olusturamayacagımız sınıfları niye olusturuyoz? sebebi -> örnegin kedi bi hayvan köpek bi hayvan ama direk hayvan adında bi nesne 
    olusturamayız cunku gerek yok burada miras alan sınıfları ek bi grup altında toplamış oluyoruz*/


    /*öyküü upcasting miras aldıgın sınıfın pointeri ile alt sınıfın nesnesinin tutulması demek aşkım videolarda izlediysen görmüşsündür*/


    /*onu yapmamızın sebebi de ornegin bir fonksiyon hayvan classı parametresi alarak çalışıyor
    ama sen onu hayvandan miras alan bi nesne icin kullanmak istiyosun
    fonksiyonu farklı parametreyle tekrar yazmak yerine üst(miras veren) sınıfın pointeri ile alt(miras alan) sınıfın nesnesini işaretleyerek fonksiyona 
    sanki üst sınıfın üyesiymiş gibi alt sınıfın nesnesini gönderebilirsin*/

    for(int i = 0; i < 2 ; i++){
        animals[i]->talk();
    }
    





    return 0;
}