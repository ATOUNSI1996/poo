#include <iostream>
using namespace std;
class cmplx
{
    float re;
    float im;
    int addition(cmplx c1, cmplx c2)
    {
        cmplx res;
        res.re = (c1.re + c2.re);
        res.im = (c1.im + c2.im);
        cout << "res = " << res.re << "+i" << res.im;
    }
};