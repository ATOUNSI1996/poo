#include <iostream>
using namespace std;
class Point
{
    public:
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
    public:
    float volume()
    {
        float res;
        res = (4/3)*3.14*r*r*r;
        return res;
    }
    void afficher()
    {
        Point::afficher();//méthode non static mais façon d'écriture valable car nous sommes dans la class
        Cercle::afficher();
        cout << "volume = " << volume() << endl;
    }
    static void test()
    {
        cout << "Test de méthode static....." << endl;
    }
    
};


int main()
{
    Cercle c;
    c.setR(20);
    Sphere s;
    s.setR(3);
    s.x = 2;
    s.y = 5;
    s.afficher();
    Sphere::test();//cette façon dans le main est valable uniquement pour les méthode static
    


};