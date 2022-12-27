#include <iostream>

using namespace std;

class C{
    public:
    C(){
        cout<<"1"<<endl;
    }
    C(const C&){
        cout<<"2"<<endl;
    }
   
    C& operator=(const C&){
        cout<<"3"<<endl;
        return *this;
    }
};

int main(){
    C c1;
    C c2;
    /*degisken ilk olusturulurken degiskenin hicbir fonksiyonunu cagıramazsın bu sebeple
    c2 = c1 yapılınca overload ettigin operator(sanırım sadece = operatoru için geçerli çünkü degiskeni ilk olusturdugumuz yerde
    kullanabildigimiz tek operator = operatru) 
    fonku calısmadı önceden tanımlı operator fonku calıstı
    bu da fonk olusturulurken eşitleme yapıldıgı için copy constructor görevi gördü ve copy constructor çalıştı*/
    
    
    //c2.operator=(c1);




    return  0;
}