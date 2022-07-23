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
    protected:
    float r;

    public:
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
    void setR(float r)
    {
        this->r = r ; 
    }
    float getR()
    {
        return r ;
    }
};

class Sphere : public Cercle
{
    float volume()
    {
        float res;
        res = (4/3)*3.14*r*r*r;
        return res;
    }
    void afficher()
    {
        cout << "perimetre = " << volume() << endl;
    }
    
};


int main()
{
    Cercle c;
    c.setR(20);
    
}