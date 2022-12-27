#include <iostream>
using namespace std;
class person{
    private:
        string personName,personSurname;
        int personAge;
    public:
        person(){
            this->personName = "";
            this->personSurname = "";
            this->personAge = 0;
        }
        person(string name,string surname,int age){
            this->personName = name;
            this->personSurname = surname;
            this->personAge = age;
        }
        void displayPerson(){
            cout<<"name : "<<this->personName<<"\nsurname : "<<this->personSurname<<"\nage : "<<this->personAge<<endl;
        }

        /*simdi burada == operatorunu overload edecegiz bu yine boolean donus tipinde bir isşlem yapacak
        -biz operatorlerin alabilecegi parametre sayısını degistiremeyiz mesela  == operatoru iki ifadeyi karsılastırır
        ve onu ikiden fazla veya az yapma şansımız yoktur(kural). Yani operator==() ifadesinde paranteszinin içine 1 den fazla veya az parametre koyulamaz*/
       bool operator==(const person &oth){
            return (this->personName == oth.personName && this->personSurname == oth.personSurname && this->personAge == oth.personAge);
       }


};
class nokta{
    public:
        int x,y;
        nokta(){
            x = 0;
            y = 0;
        }
        nokta(int x,int y){
            this->x = x;
            this->y = y;
        }
};
//üye olmayan operator fonku******************************
nokta operator+(nokta &n1,nokta &n2){
    nokta sonuc;
    sonuc.x = n1.x + n2.x;
    sonuc.y = n1.y + n2.y;
    return sonuc;
}


int main(){


    person p1("ramazan","akdag",19);
    person p2("oyku","atak",19);

    
    p1.displayPerson();
    p2.displayPerson();

    (p1 == p2) ? cout<<"there are same persons"<<endl : cout<<"not same persons"<<endl;
    /*operatoru overload ettikten sonra o parametreye girilen degerler uyuştugu surece(yani şu an iki person nesnesi karşılaştırması overload edildi)
     overload edilen şekilde işlem yapılır*/
     /*operator fonksiyonları uye olmayan şekilde de tanımlanabilir*/
    nokta nokta1(3,5);
    nokta nokta2(4,7);
    cout<<(nokta1 + nokta2).x<<" , "<<(nokta1 + nokta2).y<<endl;





    return 0;
}