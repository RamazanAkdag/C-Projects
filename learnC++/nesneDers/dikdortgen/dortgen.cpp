#include <iostream>
using namespace std;

class ciz{
    public:
        int x,y;


    ciz(int x,int y){
            this->x = x;
            this->y = y;
    }

    void basla(){
        for(int i = 1; i<= x;i++){
            for(int j = 1 ; j <= y ; j++){
                if(i == 1 || i == x || j == 1 || j  ==  y ){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        x = x/2;
        y  = y/2;
        if(x == 0 || y == 0){
            return;
        }
        basla();
    }
   

};


int main(){ 
    ciz dortgen(12,12);
    dortgen.basla();











    return 0;
}