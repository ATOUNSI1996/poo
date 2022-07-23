#include <iostream>
using namespace std;
class Cmplx
{
    //declaration des attribut
    public:
    float re;
    float im;
    //definition des méthodes
    // Cmplx addition(Cmplx c)
    // {
    //     Cmplx res;
    //     res.re = (c.re + c2.re);
    //     res.im = (c1.im + c2.im);
    //     cout << "res = " << res.re << "+i" << res.im;
    //     return res;
    // }
    void afficher()
    {
        cout << re << "+i" << im << endl;
    }
};

int main()
{
    Cmplx z1;
    z1.re = 2;
    z1.im = 3;
    // Cmplx z2;
    // z2.re = 2;
    // z2.im = 3;
    // Cmplx z3 = addition( z1,  z2);
    // cout << z3 << endl;
    z1.afficher();

}