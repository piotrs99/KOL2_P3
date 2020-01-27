#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

class Drzewo {
    public:
        Drzewo( const char* n, double h ); // to deklaracja

    private:
        string name;
        double height;
        vector<Galaz> galaz;
};

class Galaz {
    public:
        Galaz() { }

    private:
        double dlug = 0.;
        size_t lisc = 0;
}; 


int main() {
    Drzewo d1("brzoza", 20); // nazwa wysokosc
    Drzewo d2("sekwoja", 100); 
    d1.galaz( new Galaz ); // dodaje pierwsza galaz
    d1.galaz( new Galaz ); // dodaje kolejna galaz
    Galaz* g1 = d1.galaz( 0 ); // pobieram pierwsza galaz
    g1->dlugosc( 5 ); // ustawiam dlugosc galezi
    g1->lisc( 100 ); // ustawiam liczbe lisci
    Galaz* g2 = d2.galaz( 1 ); // pobieram druga galaz
    g2->dlugosc( 3 ); // ustawiam dlugosc galezi
    g2->lisc( 70 ); // ustawiam liczbe lisci

    cout << d1.nazwa() << " ma galezi: " << d1.galaz() << endl;
    cout << d2.nazwa() << " ma galezi: " << d2.galaz() << endl;

}