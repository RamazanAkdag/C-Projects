#include <iostream>
using namespace std;

struct ogrenci
{
    string ad;
    int ogrNo;

    ogrenci(string isim,int no){
        this->ad = isim;
        this->ogrNo = no;
    }

    void ogrYaz(){
        cout<<"ogrenci adi : "<<this->ad<<endl;
        cout<<"ogrenci no : "<<this->ogrNo<<endl;
    }

    ~ogrenci(){
        cout<<"ogrenci destructed"<<endl;
    }
};

struct ramo:public ogrenci
{
    // ramo(){
    //     cout<<"sa"<<endl;
    // }//HATALI KULLANIM
    void yaz(){
        cout<<"ramoSTruct yaz"<<endl;
        cout<<this->ad<<endl;
        cout<<this->ogrNo<<endl;
    }
};
class ogr{
    public:
        ogr(){
            cout<<"sa"<<endl;
        }   
};

/*her ikisi de farklı turden verileri tek bir grup altında toplamaya yarar struct ozelliginin eksikleri olmasından dolayı c++ dilinde class
olusturma ozelligi gelmistir*/
/*structlarda varsayılan constructor yazılamaz fakat farklı sayıda parametreler alan constructorlar yazılabilir*/
/*structlar bellekte stack adı verilen bolgelerde bulunur ve erişim olarak classlardan daha hızlıdır
varsayılan erişim belirleyici public tir*/
/*structlar büyük fonklar yazılınca struct karışır bnellek kayması olabilir*/

int main(){

    ogrenci ogr1("ramazan",126);

    ogr1.ogrYaz();

    ramo ram1();  
    // ram1.ad = "celo";
    // ram1.ogrNo = 100;














    //system("pause");5
    return 0;
}