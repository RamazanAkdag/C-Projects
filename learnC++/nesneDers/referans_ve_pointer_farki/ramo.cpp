#include <iostream>
using namespace std;
void pswap(int *a,int *b){/*pointer olarak parametre alınca yine pointer da bir degisken oldugu icin lokal olarak tanımlanacak bellekte
                            yer kaplayacak ve sonra silinecektir
                            dinamik işlemler için uygun olsa da referans cagırma yöntemi boyle durumlarda hem bilgisayar hem de programcı 
                            için daha kolaydır
                            çünkü referansta * operatoru kullanmak zorunda kalmıyoruz*/
    int gecici;
    gecici = *a;
    *a = *b;
    *b = gecici;
}
void refswap(int &a,int &b){/*burada referans olarak parametre alıyor ve direk fonksiyonun icine gonderilen ifadeyi degistiriyoruz
                            eger deger olarak parametre alsaydık bellekte farklı bir bolgede lokal olaak yeni degisken tanımlanmıs olacaktı ve onun
                            degeri degisecekti*/
                            
    int gecici;
    gecici = a;
    a = b;
    b = gecici;
}
/*referans bir degisken dedgildir varolan degiskenin takma adı gibi davranır ve dinamik olarak(lokal oldugu fonksiyonun dışında) degeri 
uzerinde işlemler yapılmasına izin verir
*/

int main(){
    int a = 9,b = 6;
    int &referans = a;


    cout<<"ilk a : "<<a<<endl;
    cout<<"ilk b : "<<b<<endl;
    cout<<"______________mainde referans__________________"<<endl;
    referans = 14;
     cout<<"a : "<<a<<endl;//referans a nın takma adı gibi davrandı ve anın degrini degistirdi
    cout<<"b : "<<b<<endl;
     cout<<"______________pointer fonk ile__________________"<<endl;
    pswap(&a,&b);//a ile b nin degrelerini degis tokus etti
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
     cout<<"______________referans fonk ile__________________"<<endl;
    refswap(a,b);//burada tekrar degis tokus etti
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    /*referans kullanımı cppye yeni gelen bir özelliktir ondan önce pointer olarak kullanma zorunlulugu vardı
    bu sayede surekli * operatorunu kullanmaya gerek olmuyor ve fonksiyonun icerisinde dinamik olarak deger degistirme ve ataması yapılabiliyor*/






    return 0;
}