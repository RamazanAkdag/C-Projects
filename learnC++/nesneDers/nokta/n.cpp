#include <iostream>
using namespace std;
class nokta{
    public:
        int x,y;
        nokta(int x,int y){
            this->x = x;
            this->y = y;
        }

        nokta operator++(int i){
            i = 1;
            x += i;
            y += i;
            return *this;
        }
        nokta operator+(int);
};
// nokta nokta::operator+(int i){
//     x = x + i;
//     y = y + i;
//     return *this;
// }

nokta operator+(int i,nokta &n){
    nokta a(0,0);
    a.x = n.x + i;
    a.y = n.y + i;
    return a;
    
}
nokta operator++(nokta &n){
    n.x += 1;
    n.y += 1;
    return n;
}




int main(){

    nokta n(3,5);
   // n = n + 10;
    //
    ++n;
    cout<<n.x<<" "<<n.y<<endl;









    return 0;
}