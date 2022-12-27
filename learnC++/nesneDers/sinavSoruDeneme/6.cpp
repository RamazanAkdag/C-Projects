#include <iostream>
using namespace std;
class yeni{
    public:
        int x;
        const int y;
    public:
    yeni(int i):x(i){}
    void fonk() const{ cout<<"fonk() const";}
    void fonk(){cout<<"fonk()";}
    void ramo() const{

    }


};
/*bir degiskeni const olarak bildirdiginde
derleyici degiskenin degerinin degistirebilecek işlemleri tespit edip uygun hata mesajlarını üretebilir
ancak derleyici bir üye fonkun nesnenin üye sahalarını degiştirip degistiremeyecegini bilemez
bu nedenle sıradan üye fonklar sabit nesneler için çagırılamaz.
sadece içinde deger degistirme yapılamayan const tanımlı fonklara izin verir ve bu sayede const tanımlı degiskenin guvenligini saglar*/

int main(){
    yeni t1(10);
    const yeni t2(20);
    const yeni t3(16);
    t1.fonk();
    
   // t2.fonk();
    //t3.fonk();
    /*olusturulan const tanıml nesneler class icindeki const tanımlı fonklara erişir const tanımlı fonkları kullanır*/



    return 0;
}