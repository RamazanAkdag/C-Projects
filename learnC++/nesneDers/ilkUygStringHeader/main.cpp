#include <iostream>
using namespace std;
#include "stringHeader.h"
void interface(){
  STRING ramo;
  cout<<"_____________string islemlerine hosgeldiniz_______________"<<endl;
   char secim;
   string secimler = "1-ifadenin uzunlugu\n" "2-ifadeyi farklı degiskene kopyalama\n"
                      "3-ifadeler ayni mi\n" "4-iki ifadeyi birlestir\n"
                      "5-ifadeyi ters cevir\n" "0 - programdan cik";
    cout<<secimler<<endl;
    cout<<"___________lutfen bir islem seciniz________________"<<endl;
    cin>>secim;
    char * ifade1;
    char * ifade2;
    switch(secim){
      case '1':
        cout<<"uzunlugunu bulmak istediginiz ifadeyi giriniz"<<endl;
        cin>>ifade1;
        cout<<"girilen ifade :"<<ifade1<<endl<<"ifadenin uzunlugu :"<<ramo.STRLEN(ifade1)<<endl;break;
      case '2':
        cout<<"farkli degiskene kopyalamak istediginiz ifadeyi giriniz..."<<endl;
        cin>>ifade1;
        ramo.STRCPY(ifade2,ifade1);
        cout<<"girdiginiz ifade ifade2 adli degiskene kopyalandi_________"<<endl;
        cout<<"girilen :"<<ifade1<<endl<<"ifade2 : "<<ifade2<<endl;break;
      case '3':
        cout<<"karsilastirmak icin ilk ifadeyi giriniz..."<<endl;
        cin>>ifade1;
         cout<<"karsilastirmak icin ikinci ifadeyi giriniz..."<<endl;
         cin>>ifade2;
         if(ramo.STRCMP(ifade1,ifade2) == 0){
          cout<<"iki ifade esit degil"<<endl;break;
         }else{
          cout<<"iki ifade esit"<<endl;break;
         }
      case '4':
        cout<<"birlestirmek istediginiz birinci ifadeyi girin"<<endl;
        cin>>ifade1;
        cout<<"birlestirmek istediginiz ikinci ifadeyi girin"<<endl;
        cin>>ifade2;
        ramo.STRCAT(ifade1,ifade2,"");break;
      case '5':
          cout<<"ters cevirmek istediginiz kelimeyi giriniz..."<<endl;
          cin>>ifade1;
          ramo.STRREV(ifade1);break;
      case '6':
          cout<<"______programdan cikiliyor________"<<endl;
          return;break;
      default:
        cout<<"yanlis bir ifade girildi..."<<endl;
        interface();
        break;


    }

}

int main(){
    STRING ramo;
    ramo.str1 = new char[100];
    ramo.str2 = new char[100];

            
   

  interface();





    system("pause");
    return 0;
}