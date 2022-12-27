#include <iostream>
using namespace std;
class nokta{
    public:
        int x,y;
        nokta(int x,int y){
            this->x = x;
            this->y = y;
        }
        nokta(){

        }

        nokta operator+(nokta &n){
            nokta temp;
            temp.x =this->x + n.x;
            temp.y = this->y + n.y;
            return temp;
        }


};

void fibSeqSquare(int /*fibSeq =*/ fibSeq[])//dizi ilk eleman adresi ile dizi gönderimi aynı şeyi ifade eder
{
for(int i=0;i<5;i++)
fibSeq[i] *= fibSeq[i];
}

int main(){
    
    // nokta n1(3,5);
    // nokta n2(5,7);
    // nokta n3();
    
    // cout<<(n1 + n2).x<<" ---- "<<(n1 + n2).y<<endl;

    //DİZİLİ POİNTER KONUYLA ALAKASIZ--------------------------------------------------------------
    // int fibSeq[5] = {1,1,2,3,5};
    // int* fibPtr;
    // fibPtr = fibSeq;
    // cout<<"\n fibSeq points to :"<<*fibSeq;//1 çıktısı verir yani ilk elemanın adresinin içinde tuttugu deger
    // for(int i=0;i<5;i++)
    // cout <<"\n fibSeq[i]: "<<(*fibPtr+i);

    int fibSeq[5] = {1,1,2,3,5};
fibSeqSquare(fibSeq);
for(int i=0;i<5;i++)
cout<<fibSeq[i]<<" ";





    return 0;
}