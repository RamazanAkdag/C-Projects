#include <iostream>
using namespace std;

//static degiskenleri en son degerini korur
//static olarak tanımlanan degiskenler nesneler arasında ortak kullanıma sahip olur
//operator overloading
//ornegin iki nesne uzerinde işlem yapılacak, araya koyulan operatore yapması gereken işlemi tanımlamaya operator overloading denir
class sayi
{
private:
    /* data */
public:
    int a[10] = {0};
    sayi & ekle(int deger,int index);
    void yaz(){
        int i = 0;
        while(a[i] != 0){
            cout<<a[i]<<endl;
            i++;
        }
    }
    int x,y;
    sayi operator+(sayi &diger){
        sayi a;
        a.x = x + diger.x;
        a.y = y + diger.y;

        return a;
    }
    sayi operator+(int c){
        
        x = x + c;
        y = y + c;
        return *this; 
    }
};
sayi &  sayi::ekle(int deger,int index){
    this->a[index] = deger;
    return *this; 
}


int main(){

    sayi x;
    x.ekle(3,0).ekle(5,1).ekle(9,2);
    x.yaz();

    










    return 0;
}


