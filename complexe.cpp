#include <iostream>
using namespace std;
class Cmplx
{
    //declaration des attribut
    public:
    float re;
    float im;

    //definition du contructeurs
    // Cmplx()
    // {
    //     cout << "je suis dans le constructeurs.....";
    // } 

    Cmplx(float a =0, float b = 0)
    {
        cout << "je suis dans le deuxieme constructeurs.....";
        re = a;
        im = b;
    }
    //definition des méthodes
    Cmplx operator+(Cmplx c)
    {
        Cmplx res;
        res.re = (c.re + re);
        res.im = (c.im + im);
        cout << "res = " << res.re << "+i" << res.im;
        return res;
    }
    void afficher()
    {
        cout << re << "+i" << im << endl;
    }
    //definition du destructeurs
    ~Cmplx()
    {
        cout << "passage par le destructeurs......";
    }
};

int main()
{
    Cmplx z1;
    z1.re = 2;
    z1.im = 3;
    Cmplx z2(4, 7);
    // z2.re = 2;
    // z2.im = 3;
    Cmplx z3 = z1.operator+(z2); // même Cmplx z3 = z1+z2;
    z3.afficher();
    // z1.afficher();

}