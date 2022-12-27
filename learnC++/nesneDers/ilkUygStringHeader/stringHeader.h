#include <iostream>
using namespace std;

//#include <string.h>

class STRING{
    public:
         char *str1;
         char *str2;
        char *s;

        int STRLEN(char *);//UZUNLUK HESAPLA
        void STRCPY(char *,char *);//KOPYALA
        int STRCMP(char *,char *);//KARŞILAŞTIR
        void STRCAT(char *,char *,char *);//BİRLEŞTİR
        void STRREV(char *);//TERS ÇEVİR
        
        //bunları yaz sonra main fonkunda menü oluştur ve kullancıdan yapmak istedigi islemi al ve sonr aislemi yapıcak bir sistem tasarla

};

int STRING::STRLEN(char *arrayInput){
    int arrayLen = 0;
    while(arrayInput[arrayLen] != '\0'){
        arrayLen++;
    }
    //cout<<arrayLen;
    return arrayLen;
}

void STRING::STRCPY(char *dest,char *source){   
    //int i = 0;
    while(*source != '\0'){
        *dest = *source; 
        dest++;
        source++;
    }
    *dest = '\0';
}

int STRING::STRCMP(char *s1,char *s2){
    if(STRLEN(s1) != STRLEN(s2))
        return 0;
    
    int i = 0;
    while(s1[i] != '\0'){
        if(s1[i] != s2[i])
            return 0;
    
        i++;
    }
     return 1;
}

void STRING::STRCAT(char *a,char *b,char *c){
    //int i = STRLEN(a) - 1;
    while(*a != '\0'){
        a++;
    }
    while(*b != '\0'){
         *a = *b;
         b++;
         a++;
    }

    cout<<"birlestirilen ifade: "<<c<<endl;

}

void STRING::STRREV(char *s){
    int i = STRLEN(s) - 1;
    int j = 0;
    char * reverse = new char[1000];

    while(i >= 0){
        reverse[j] = s[i];
        i--;
        j++;
    }
    reverse[j] = '\0';
    cout<<"girilen ifadenin tersi :"<<reverse<<endl;


}
