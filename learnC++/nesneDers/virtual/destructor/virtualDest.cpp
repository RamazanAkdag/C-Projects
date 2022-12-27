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
        virtual ~employee(){
            cout<<"employee destructor worked..."<<endl;
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
         ~manager(){
            cout<<"manager destructor worked..."<<endl;
        }
        void increaseSalary(){
            salary += 200;
        }
};

    // void print(employee & employeeType){
    //     employeeType.display();
    // }
    // void print2(employee * employeeType){
    //     employeeType->display();
    // }
    // void print3(employee employeeType){

    //     employeeType.display();
    // }
int main(){
    // employee emp1("ramazan akdag",2000);
    // manager mng1("ogun birinci",2000,"software");
    
    // /*eger base sınıf pointeri ile derived sınıftan olusturdugun nesneyi tutarsan(upcasting) sadece baseclasssın degisken ve fonklarına erişebilrisin*/
    // cout<<"_____________________Reference Parameter______________________ "<<endl;
    // /*referans degişkenin takma gibidir yani referans diye tanımladıgın ifadeden bahsederken aslında referansı atadıgın degişkeni cagırdıgın anlasılır*/
    // print(emp1);
    // cout<<"--------------------------"<<endl;
    // print(mng1);
    //  cout<<"_____________________pointer Parameter______________________ "<<endl;
    //  employee *emp2 = new employee("ramazan akdag",2000);
    //  manager *mng2 = new manager("ogun birinci",2000,"software");

    // print2(emp2);
    // cout<<"--------------------------"<<endl;
    // print2(mng2);
    // cout<<"_____________________value parameter______________"<<endl;
    // print3(emp1);
    //  cout<<"--------------------------"<<endl;
    // print3(mng1);

    /*virtual fonkların işe yarayabilmesi için ya referansıyla ya da pointer yardımıyla çağrı yapılması gerekir*/

    manager* mn1 = new manager("ogun birinci",2000,"software");
    employee * em1 = mn1;
    employee *em2 = new manager("oyku atak",10000,"backEnd developer");
    delete em2;//yine burada da manager nesnesinin destructoru çalışmadı
                //bu sorunu çözmek için virtual destructor kullanılır
                //burada miras veren sınıfın destructoruna virtual keyvordu eklemek yeterli olacaktır;

    delete em1;//burada employee sınıfının destructoru çalıştı çünkü onun pointeri üzerinden işlem yapıldı
    //burada delete mn1 yaparak sorunu çözebiliriz fakat mn1i tanımlamamış olsaydık ve direk em1 üzerinde dinamik olarak manager tanımlamış olsaydık
    //silme işlemi yaptıgımız zaman yine employee destructoru çalışacaktı ve bu istenmeyen bir durumdur. çünkü calısan dest sınıfın kendi destructoru degil 




    return 0;
}