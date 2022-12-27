#include <iostream>
using namespace std;

/*template fonksiyonlar javadaki generic fonklara benzer özellikler gosterir*
/*3 veya 4 ten fazla aynı fonksiyonu overload ediyorsak burada template fonksiyon kullanımı aklımıza gelmeli*/


//AŞAGIDAKİ ŞEKİLDE 3 FONK YAZICAGIMIZA
// int getMax(int a , int b){
//     int max;
//     (a > b) ? max  = a : max = b ;
//     return max;
// }
// float getMax(float a , float b){
//     float max;
//     (a > b) ? max  = a : max = b ;
//     return max;
// }
// double getMax(double a , double b){
//     double max;
//     (a > b) ? max  = a : max = b ;
//     return max;
// }
////////TEMPLATE FUNC
template <class Type>
Type getMax(Type a, Type b){
    Type max;
    (a > b) ? max  = a : max = b ;
    return max;

}
template <class T>
T topla(T a, T b){
    T sonuc = a + b;
    return  sonuc;
}


int main(){

    cout<<getMax("yamo","ramol")<<endl;



    return 0;
}