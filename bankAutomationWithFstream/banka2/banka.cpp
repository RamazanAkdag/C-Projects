#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int ID = 0;

class bankHesap{
    private:
    
    int hesapNo;
    string kullaniciAdi;
    string sifre;
    double bakiye;
    public:
    bankHesap(){
    }
    bankHesap(string kullaniciAdi,string sifre){
        this->kullaniciAdi = kullaniciAdi;
        this->sifre = sifre;
        this->bakiye = 0;
        ID++;
        this->hesapNo =  ID ;
    }

    void displayhesap(){
        cout<<"hesap no : "<<this->hesapNo<<endl;
        cout<<"kullanici adi : "<<this->kullaniciAdi<<endl;
        cout<<"bakiye : "<<this->bakiye<<endl;
    }

    friend void hesapEkle();
    friend void hesabiDosyayaYaz(bankHesap &);
    
    friend bankHesap hesabiDosyadanGetir(string,string);
    friend void hesapGuncelle();
    void guncellenHesabiDosyayaYaz(string,string);
    friend bankHesap hesabiGoruntule();
    friend void hesapSil();
    friend void paraYatir();
    friend void paraCek();

};

bankHesap hesabiDosyadanGetir(string kullaniciAdi,string sifre){
    ifstream dosya("bankaVeriTabani.txt");
    string dosyadakiKullaniciAdi;
    bankHesap getirilenHesap;
    while(getline(dosya,dosyadakiKullaniciAdi)){//goruntulenecek kullanıcı adını dosyadan bulma
        if(dosyadakiKullaniciAdi == kullaniciAdi){//buldugu gibi döngü kırılır
            break;
        }
    }           
    string dosyadakiSifre;//altındaki deger sifre
    getline(dosya,dosyadakiSifre);//hemen altındaki degeri alıp dosyadaki sifre degrine esitledi
    if(sifre == dosyadakiSifre){//dosyadaki sifreyle girilen sifre uyusuyosa hesabı getiricez
        getirilenHesap.kullaniciAdi = dosyadakiKullaniciAdi;
        getirilenHesap.sifre = dosyadakiSifre;

        string hesapNo;
        getline(dosya,hesapNo);
    
        getirilenHesap.hesapNo = stoi(hesapNo);;
        string bakiye;

        getline(dosya,bakiye);
        getirilenHesap.bakiye = stod(bakiye);

        //string ifadeleri int ve doubleye donusturerek hesapNo ve bakiye bilgilerini de hesaba getirdik

        //getirilenHesap.displayhesap();//hesap görüntüleniyor
        return getirilenHesap;
    }else{
        cout<<"boyle bir hesap bulunamadi kullanici adi veya sifre yanlis..."<<endl;
        return getirilenHesap;
        
    }
   
    




}

bankHesap hesabiGoruntule(){
    //cout<<"hesap goruntuleme islemlerine hosgeldiniz..."<<endl<<endl;

    cout<<"______________________________________________"<<endl;
    cout<<"hesabinizin kullanici adini girin..."<<endl;
    string kullaniciAdi;
    cin>>kullaniciAdi;
    cout<<"hesabinizin sifresini girin..."<<endl;
    string sifre;
    cin>>sifre;
    return hesabiDosyadanGetir(kullaniciAdi,sifre);

}
void bankHesap::guncellenHesabiDosyayaYaz(string eskiKullaniciAdi,string eskiSifre){
    ifstream ilk("bankaVeriTabani.txt");
    ofstream iki("geciciVeriTabani.txt");
    string crWord;
    while(getline(ilk,crWord)){
        if(crWord == eskiKullaniciAdi && getline(ilk,crWord) && crWord == eskiSifre ){
           iki<<kullaniciAdi<<endl;
           iki<<sifre<<endl;
           iki<<hesapNo<<endl;
           iki<<bakiye<<endl<<endl;
           while(crWord != ""){
                getline(ilk,crWord);
           }
        }
            iki<<crWord<<endl;
    }
    iki.close();
    ilk.close();
    ofstream anaVT("bankaVeriTabani.txt");
    ifstream gecici("geciciVeriTabani.txt");//gecici vtdeki bilgileri ana vtye aktarıcaz burdan okuyup anavtye yazıcaz tekrar
    while(getline(gecici,crWord)){
        anaVT<<crWord<<endl;
    }
     anaVT.close();
    gecici.close();

}
void hesapSil(){
    bankHesap silinecek = hesabiGoruntule();
    ofstream geciciVt("geciciVeriTabani.txt");
    ifstream anaVt("bankaVeriTabani.txt");
    string crWord;
    while(getline(anaVt,crWord)){
        if(crWord == silinecek.kullaniciAdi){
            while(crWord != ""){
                getline(anaVt,crWord);
            }
        }
        geciciVt<<crWord<<endl;
    }
    geciciVt.close();
    anaVt.close();
    ofstream anaVT("bankaVeriTabani.txt");
    ifstream gecici("geciciVeriTabani.txt");//gecici vtdeki bilgileri ana vtye aktarıcaz burdan okuyup anavtye yazıcaz tekrar
    while(getline(gecici,crWord)){
        anaVT<<crWord<<endl;
    }
    anaVT.close();
    geciciVt.close();

}


void hesapGuncelle(){
   bankHesap guncellenecek = hesabiGoruntule();
   cout<<"neyi guncellemek istiyorsunuz..."<<endl;
   cout<<"kullanici Adi -> 1"<<endl;
   cout<<"sifre -> 2"<<endl;
   
   char c;
   cin>>c;
   string yeniKullaniciAdi;
   string eskiKullaniciAdi = guncellenecek.kullaniciAdi;
   string eskiSifre = guncellenecek.sifre;
   string sifre;
   switch(c){
        case '1':
            cout<<"yeni kullanici adi girin..."<<endl;
            
            cin>>yeniKullaniciAdi;
            guncellenecek.kullaniciAdi = yeniKullaniciAdi;
            break;
        case '2':
            cout<<"yeni sifrenizi girin..."<<endl;
           
            cin>>sifre;
            guncellenecek.sifre = sifre;
            break;
        default:
            cout<<"yanlis islem girildi..."<<endl;
            return;
   }
   guncellenecek.guncellenHesabiDosyayaYaz(eskiKullaniciAdi,eskiSifre);

}

void paraYatir(){
    bankHesap yatirilacak = hesabiGoruntule();
    cout<<"yatirmak istediginiz mikari girin..."<<endl;
    double miktar;
    cin>>miktar;
    yatirilacak.bakiye = miktar;
    yatirilacak.guncellenHesabiDosyayaYaz(yatirilacak.kullaniciAdi,yatirilacak.sifre);

}

void paraCek(){
    bankHesap cekilecek = hesabiGoruntule();
    cout<<"mevcut bakiyeniz : "<<cekilecek.bakiye<<endl;
    cout<<"*****************************"<<endl;
    cout<<"cekmek istediginiz miktari girin"<<endl;
    double miktar;
    cin>>miktar;
    if(miktar > cekilecek.bakiye){
        cout<<"hesapta o kadar para yok"<<endl;
    }else{
        cekilecek.bakiye -= miktar;
    }
    cekilecek.guncellenHesabiDosyayaYaz(cekilecek.kullaniciAdi,cekilecek.sifre);
}




void hesabiDosyayaYaz(bankHesap & hesap){
    ofstream dosya("bankaVeriTabani.txt",ios::app);
    
    dosya<<hesap.kullaniciAdi<<endl;
    dosya<<hesap.sifre<<endl;
    dosya<<hesap.hesapNo<<endl;
    dosya<<hesap.bakiye<<endl<<endl;
    dosya.close();
}
bool zatenVarMi(string kullaniciAdi,string sifre){
    ifstream anaVt("bankaVeriTabani.txt");
    string crWord;
    while(getline(anaVt,crWord)){
        if(crWord == kullaniciAdi && getline(anaVt,crWord) && crWord == sifre){
            anaVt.close();
            return true;
        }
    }
    anaVt.close();
    return false;
}
void hesapEkle(){
    cout<<"hesap olusturma islemlerine hosgeldiniz..."<<endl<<endl;

    cout<<"_________________________________________"<<endl;
    cout<<"kullanici adi girin..."<<endl;
    string kullaniciAdi;
    cin>>kullaniciAdi;
    fflush(stdin);
    cout<<"sifre girin..."<<endl;
    string sifre;
    cin>>sifre;
    if(!zatenVarMi(kullaniciAdi,sifre)){
    bankHesap yeni(kullaniciAdi,sifre);
    hesabiDosyayaYaz(yeni);
    }else{
        cout<<"ayni kullaniciAdi ve sifreye sahip hesap zaten var"<<endl;
        return;
    }

}
void vtyiYaz(){
     ifstream anaVt("bankaVeriTabani.txt");
            string crWord;
            while(getline(anaVt,crWord)){
                cout<<crWord<<endl;
            }
    anaVt.close();
}


int main(){
    cout<<endl<<endl<<"banka islemlerine hosgeldiniz..."<<endl;
    cout<<"yapmak istediginiz islemi giriniz..."<<endl<<endl;
    /*verileri dosya içinde tut güncelleme silme işlemleri dosyadan*/
    cout<<"hesap olustur -> 1"<<endl;
    cout<<"hesap goruntuleme -> 2"<<endl;
    cout<<"hesap guncelleme -> 3"<<endl;
    cout<<"hesap silme -> 4"<<endl;
    cout<<"para yatirma için -> 5"<<endl;
    cout<<"para cekme -> 6"<<endl;
    cout<<"tum listeyi goster -> 7"<<endl;
    cout<<"cikis icin -> 8"<<endl;
    char secim;
    cin>>secim;

    //ofstream vtYeEkle("bankaVeriTabani.txt");
    //ifstream vtDenbul("bankaVeriTabani.txt");
   
    switch(secim){
        case '1':
            cout<<endl<<"******hesap Ekleme********"<<endl;
            hesapEkle();
            
            break;
        case '2':
            cout<<endl<<"******hesap goruntuleme********"<<endl;
            hesabiGoruntule().displayhesap();
            break;
        case '3':
            cout<<endl<<"******hesap guncelleme********"<<endl;
            hesapGuncelle();break;
        case '4':
            cout<<endl<<"******hesap silme********"<<endl;
            hesapSil();
            break;
        case '5':
             cout<<endl<<"******para yatirma********"<<endl;
             paraYatir();
             break;
        case '6':
            cout<<endl<<"******para cekme********"<<endl;
            paraCek();
            break;
        case '7':
            cout<<endl<<"******tum listeyi goster********"<<endl;
            vtyiYaz();
            break;
        case '8':return 0;





    }
    
   
    
  
   



















    return 0;
}