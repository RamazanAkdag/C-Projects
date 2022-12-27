#include <iostream>
#include <math.h>
using namespace std;

template <class type>
class polinom
{
public:
    int derece;
    type katsayi[];

    polinom(int derece)
    {
        this->derece = derece;
        katsayi[derece + 1];
    };

    polinom *olustur(int index, type sayi)
    {
        katsayi[index] = sayi;
        return this;
    }

    type coz(type x)
    {
        type sonuc;
        int copyderece = derece;
        for (int i = 0; i < derece + 1; i++)
        {

            sonuc += katsayi[i] * pow(x, copyderece);
            copyderece--;
        }
        return sonuc;
    }

    void yaz()
    {
        int y = derece;
        for (int i = 0; i < derece; i++)
        {
            if (katsayi[i] == 0)
                continue;
            if (katsayi[i] == 1)
                cout << 'x' << y << '+';
            else
                cout << katsayi[i] << 'x' << y << '+';
            y--;
        }

        if (katsayi[derece] != 0)
            cout << katsayi[derece];
    }

    template <class U>
    friend ostream &operator<<(ostream &, polinom<type> &);
};

template <class type>
ostream &operator<<(ostream &out, polinom<type> &pol)
{
    int y = pol.derece;
    for (int i = 0; i < pol.derece; i++)
    {
        if (pol.katsayi[i] == 0)
            continue;
        if (pol.katsayi[i] == 1)
            cout << 'x' << y << '+';
        else
            cout << pol.katsayi[i] << 'x' << y << '+';
        y--;
    }

    if (pol.katsayi[pol.derece] != 0)
        cout << pol.katsayi[pol.derece];
        return out;

}

int main()
{
    polinom<int> a(2);
    a.olustur(0, 1)->olustur(1, 1)->olustur(2, 1);

    

    cout << a;
    return 0;
}