#include <iostream>
using namespace std;
enum aylar{
    ocak = 1,subat,mart,nisan,mayis,haziran,temmuz,agustos,eylul,ekim,kasim,aralik
    
};

class tarih{
    int gun;
    aylar ay;
    int yil;

public:
    void zaman();
    tarih(int gun,aylar ay,int yil){
        this->gun = gun;
        this->ay = ay;
        this->yil = yil;
    }
    void setle(int ,aylar ,int );
};

void tarih::zaman(){
 
}




int main(){
    
    tarih today(26,ocak,2021);
    







    return 0;
}