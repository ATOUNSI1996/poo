#include <iostream>
#include <cstdlib>
using namespace std;
class Chaine
{
    public:
        int l;
        char *ch;

        //constructeurs
        
        Chaine()
        {
            cout << "je suis dans le construteur...";
        }

        Chaine(string str)
        {
            l = str.length() + 1 ;
            ch = (char *) malloc(l*sizeof(char));
            for (int x = 0; x < l; x++) 
            { 
                *(ch+x) = str[x];  
            }

        }

        void operator=(string str)
        {
            cout << "passage par operator = ";
            l = str.length() + 1 ;
            ch = (char *) malloc(l*sizeof(char));
            for (int x = 0; x < l; x++) 
            { 
                *(ch+x) = str[x];  
            }

        }
        //definition des méthodes
        Chaine operator+(Chaine cha)
        {
            Chaine res;
            cout << "passage par operator + " << cha.ch;
            res.l = l + cha.l +1 ;
            res.ch = (char *) malloc((res.l)*sizeof(char)) ;
            for (int x = 0; x < l; x++) 
            {
                *(res.ch+x) = *(ch+x);    
            }
            for (int x = 0; x < cha.l; x++) 
            {
                cout << "passage par boucle 2...";
                *(res.ch+x+l-1) = *(cha.ch+x);    
            }
           return res;

        }
        void afficher()
        {
            cout << "ch = " << ch << endl;
        }
        //definition du destructeurs
        ~Chaine()
        {
            cout << "passage par le destructeurs......";
        }
};
int main() {
    Chaine cha1,cha2,cha3; //*cha = new Chaine("salut") ; ,
    cha1 = "Bonjour";
    cha2 = " ahmed" ; 
    cha3 = cha1 + cha2 ;
   // cha->afficher();
   // delete(cha);
   cha3.afficher();
     return 0;
}