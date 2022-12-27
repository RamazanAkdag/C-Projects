#include <iostream>
#include <cstdlib>
#include "math.h"

using namespace std;

template<class Type>
class polinom{
public:
    int us;
    Type *katsayilar;


    void olustur(){
        cout<<"olusturmak istediginiz polinomun derecesini giriniz..."<<endl;
        cin>>us;

        katsayilar = new Type[us + 1];

        for(int i = us ; i >= 0 ; i--){
            cout<<i<<" dereceli terimin katsayisini giriniz..."<<endl;
            cin>>katsayilar[i];
        }


   
    }

    Type cozum(Type x){
        Type sonuc;

        for(int i = us ; i >= 0 ; i--){

            sonuc += katsayilar[i] * pow(x,i);

        }

        return sonuc;
    }


    template<class U>
    friend ostream& operator<<(ostream& out,polinom<U>& p);

};

template<class Type>
ostream& operator<<(ostream& out,polinom<Type>& p){
    

    for(int i = p.us ; i >= 0 ; i--){

        if(p.katsayilar[i] == 0){
            continue;
        }
        if(i == 1){
            out<<p.katsayilar[i]<<"x + ";
            continue;
        }
        if(i == 0){
            out<<p.katsayilar[i];
        }
        else{
            out<<p.katsayilar[i]<<"x^"<<i<<" + ";
        }
    }
     
    return out;


}

int main(){
    polinom<int> p;

    p.olustur();

    

    cout<<p<<endl;
    cout<<p.cozum(2)<<endl;






   
    system("pause");
    return 0;
}