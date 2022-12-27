#include <iostream>
using namespace std;
class animal{
    public:
        int numFoot;
        void talk(){
            cout<<"animal talking..."<<endl;
        }
        void selo(){
            cout<<"aleykum selam babba"<<endl;
        }
};
class cat:public animal{
    public:
        void talk(){
            cout<<"meov meov..."<<endl;
        }
        void ramo(){
            cout<<"esselamu aleykum babba"<<endl;
        }
        
};

int main(){
    //animal* animalPtr;
    animal animal;
    cat cat2;
    
    cat* catPtr = (cat *)&animal;
    /*bu sayede baseclassın objesi derived classtaki fonklara erişim yapabilir catptr uzerinden yapılan her sey animal objesini etkiler cunku 
    animal objesi kedi classı işaretçisi tarafından tutuldugu için kedi classı işaretçisinde bulunan fonklar çalıştırılır ve sanki
    animal objesine aitmiş gibi olur*/
    
    //animal. koyunca yalnızca animal fonkları gelirken adreste aynı yeri ve degiskeni gostermesine ragmen catptr. koyunca cat classının fonkları gelir

    
    
    
    
    





    system("pause");
    return 0;
}