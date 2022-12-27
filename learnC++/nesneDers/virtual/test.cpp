#include <iostream>
using namespace std;
class sekil{
    public:
    int x,y;
};
class dikdortgen : public sekil
{
public:
int alan();
};
class kare : public sekil
{
public:
int alan();
};
int dikdortgen::alan()
{ return x * y ; }
int kare::alan()
{return x * x ; }

int main(){
    dikdortgen d;
    d.x = 5;
    d.y = 3;
    cout<<"dikdortgen alan :"<<d.alan()<<endl;
    kare k;
    k.x = 9;

    cout<<"kare alan : "<<k.alan()<<endl;








    return 0;
}