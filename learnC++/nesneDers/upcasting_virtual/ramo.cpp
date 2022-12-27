#include <iostream>
using namespace std;

class employee{
    public:
        string name;
        int salary;
        employee(string name,int salary)
        {
            this->name = name;
            this->salary = salary;
        }

        virtual void display(){
            cout<<"name : "<<this->name<<"\nsalary : "<<this->salary<<endl;
        }
};
class manager:public employee{
    public:
        string mngDepartment;
        manager(string name,int salary,string mngDepartment):employee(name,salary){
            this->mngDepartment = mngDepartment;
        }
        void display(){
            employee::display();
            cout<<"manage department : "<<this->mngDepartment<<endl;
        }
        void increaseSalary(){
            salary += 200;
        }
};

    void print(employee & employeeType){
        employeeType.display();
    }
    void print2(employee * employeeType){
        employeeType->display();
    }
    void print3(employee employeeType){

        employeeType.display();
    }
int main(){
    employee emp1("ramazan akdag",2000);
    manager mng1("ogun birinci",2000,"software");
    
    /*eger base sınıf pointeri ile derived sınıftan olusturdugun nesneyi tutarsan(upcasting) sadece baseclasssın degisken ve fonklarına erişebilrisin*/
    cout<<"_____________________Reference Parameter______________________ "<<endl;
    /*referans degişkenin takma adı gibidir yani referans diye tanımladıgın ifadeden bahsederken aslında referansı atadıgın degişkeni cagırdıgın anlasılır*/
    print(emp1);
    cout<<"--------------------------"<<endl;
    print(mng1);
     cout<<"_____________________pointer Parameter______________________ "<<endl;
     employee *emp2 = new employee("ramazan akdag",2000);
     manager *mng2 = new manager("ogun birinci",2000,"software");

    print2(emp2);
    cout<<"--------------------------"<<endl;
    print2(mng2);
    cout<<"_____________________value parameter______________"<<endl;
    print3(emp1);
     cout<<"--------------------------"<<endl;
    print3(mng1);

    /*virtual fonkların işe yarayabilmesi için ya referansıyla ya da pointer yardımıyla çağrı yapılması gerekir*/
    cout<<"--------------------------------------------özgür----------"<<endl;
    employee *ramo = new manager("ramazan",2000,"yazılım");
    ramo->display();





    return 0;
}