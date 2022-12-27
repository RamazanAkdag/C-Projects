#include <iostream>
using namespace std;

int main(){

    int *p,*q,i;
    p = new int;
    *p = 43;
    q = p;//adresleri eşit degerleri de eşit
    cout<<q<<endl;
    *q = 52;
    cout<<p<<endl;
    p = new int;

    *p = 78;
    q = new int;
    *q = *p;//adresleri farklı degerleri aynı
    cout<<q<<endl;
    cout<<p;









    return 0;
}