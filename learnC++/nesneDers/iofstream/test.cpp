#include <iostream>
#include <fstream>
using namespace std;
int main(){

   ofstream yazma("bir.txt");

    yazma<<"selamlar efenim nasılsınız..."<<endl;
    yazma<<"aleykum selamlar efenim iyiyiz..."<<endl;
    yazma<<"adım azrail kes lan sesini..."<<endl;

    yazma.close();

    ifstream okuma("bir.txt");//dosya konumu girmemiz lazım dosya adından ziyade
    string satir;
    // getline(okuma,satir);/*getline ile okuma yapıldıgında dosyanın içinde bulunan iterator imleci alt satırın başındaymış gibi görür
    //                         ve devamında yine getline kullanıldıgında alt satır okunur
    //                         tüm satırlar okunduysa getline fonku her calstıgında son satır tekrardan okunur*/
    // cout<<satir<<endl;
    // getline(okuma,satir);
    // cout<<satir<<endl;

    // while(getline(okuma,satir)){//bu komut aynı zamanda bir boolean veri tipi döndürür eger satır null(yani ondan sonra bir ifade yoksa) degilse true boşsa false
    //     cout<<satir<<endl;
    // }

    string kelime;
    while(okuma>>kelime){/*cin ifadesinde kullanılan >> operatoru dosya icerisinden kelime okumayı saglar aynı zamanda bool veri tipi dondurur  */
        cout<<kelime<<" ";
    }
    okuma.close();


    
    
    


    

    
    





    return 0;
}