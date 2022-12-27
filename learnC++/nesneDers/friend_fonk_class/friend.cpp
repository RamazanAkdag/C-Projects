#include <iostream>
using namespace std;
//yaızlım bilimi friend fonklar

class employee{
    private:
     string name;
     int age;
     int salary;
    public:
        employee(string name,int age,int salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }
        //friend void showInfos(employee);
        friend class test;//test classının friend class oldugunu belirterek kullandıgında tset classı employee nin tum private ozelliklerine erişim 
                            //saglayabilir
};

//FRIEND CLASS olusturma
class test{
    public:
        static void showInfos(employee emp){
             cout<<emp.name<<endl;
            cout<<emp.age<<endl;
            cout<<emp.salary<<endl;
        }


};
/*C++ dilinde bir class diger bir classın icinde kullanılacaksa kullanılıcak olan digerinin altına yazılmalıdır*/
///////////////////////////////////////////////////////////////
// void showInfos(employee emp){
//     cout<<emp.name<<endl;
//     cout<<emp.age<<endl;
//     cout<<emp.salary<<endl;
// }

int main(){
    employee emp1("ramazan",30,2000);

    test::showInfos(emp1);









    return 0;
}