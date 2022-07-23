#include <iostream>
using namespace std;
class Point
{
    float x;
    float y;
    void afficher()
    {
        cout << "x est " << x << " y est << " << y << endl;
    }
};

class Cercle : public Point
{
    float r;
    float surface ()
    {
        float res;
        res = 3.14 * r * r;
        return res;
    }
    float perimetre()
    {
        float res;
        res = 2 * 3.14 * r;
        return res;
    }
    void afficher()
    {
        cout << "perimetre = " << perimetre() << "surface = " << surface() << endl;
    }
};