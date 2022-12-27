#include <iostream>
#include <fstream>
using namespace std;
int hesapNo = 0;


class hesap{
    private:
        int hesapNo;
        string sifre;
        string kullaniciAdi;
        double hesapBakiye;
    public:

        hesap(int hesapNo,string kullaniciAdi,string sifre){
            this->hesapNo = hesapNo;
            this->kullaniciAdi = kullaniciAdi;
            this->sifre = sifre;
            hesapBakiye = 0.0;
        }
        



        friend hesap* hesapEkle();
        void dosyayaEkle(ofstream &hesaplar);
        friend void hesapGoruntule(ifstream & );
        friend void hesapGuncelle(ifstream &);
        friend void hesapSil(ifstream &);
};
void hesap::dosyayaEkle(ofstream & hesaplar){
    hesaplar<<this->hesapNo<<endl;
    hesaplar<<this->kullaniciAdi<<endl;
    hesaplar<<this->hesapBakiye<<endl<<endl<<endl;
}
hesap* hesapEkle(ifstream & hesaplar){
    cout<<"hesap ekleme islemine hosgeldiniz..."<<endl;
    string hesapAd;
    string hesapSifre;
    cout<<"lutfen kullanici adinizi giriniz..."<<endl;
    cin>>hesapAd;
    cout<<"lutfen sifrenizi giriniz..."<<endl;
    cin>>hesapSifre;
    int bankaHesapNo = ++hesapNo;

    hesap *h = new hesap(bankaHesapNo,hesapAd,hesapSifre);
    
    return h;
    
}

void hesapGoruntule(ifstream & hesaplar){
    cout<<"hesap gorutuleme islemlerine hosgeldiniz..."<<endl;
    string kullaniciAdi;
    cout<<"hesabinizin kullanici adini giriniz..."<<endl;
    cin>>kullaniciAdi;
    string sifre;
    cout<<"hesabinizin sifresini giriniz..."<<endl;
    cin>>sifre;






}
void hesapGuncelle(ifstream & hesaplar){

}

void hesapSil(ifstream & hesaplar){

}




int main(){
    cout<<endl<<endl<<"banka islemlerine hosgeldiniz..."<<endl;
    cout<<"yapmak istediginiz islemi giriniz..."<<endl<<endl;
    /*verileri dosya içinde tut güncelleme silme işlemleri dosyadan*/
    cout<<"hesap olustur -> 1"<<endl;
    cout<<"hesap görüntüleme -> 2"<<endl;
    cout<<"hesap güncelleme -> 3"<<endl;
    cout<<"hesap silme -> 4"<<endl;
    cout<<"para yatırma için -> 5"<<endl;
    cout<<"para cekme -> 6"<<endl;
    cout<<"tum listeyi goster -> 7"<<endl;
    cout<<"cikis icin -> 8"<<endl;
    char secim;
    cin>>secim;
    ofstream hesaplar1("hesaplar.txt");
    ifstream hesaplar2("hesaplar.txt");
    


    switch(secim){
        case '1':
            hesap* eklenenHesap = hesapEkle(hesaplar2);
            eklenenHesap->dosyayaEkle(hesaplar1);
            break;
        case '2':
           
            hesapGoruntule(hesaplar2);
            break;
        case '3':
            hesapGuncelle(hesaplar2);
            break;

        case '4':
            hesapSil(hesaplar2);
            break;

        case '5':
            ParaYatir(hesaplar2);
            break;

        case '6':

        case '7':

        case '8':

        default:
            cout<<"hatali islem..."<<endl;
        return 0;







    }











    return 0;
}