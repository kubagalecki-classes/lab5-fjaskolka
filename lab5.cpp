#include <iostream>
#include <vector>
using namespace std;

class Human
{
private:
    string imieH;
    int    wiekH;

public:
    void   set_imie(string imie_pom) { imieH = imie_pom; }
    string get_imie() { return imieH; }
};

int main()
{
    string           imie;
    Human            h;
    int              o = 1;
    vector< string > tab;
    while (o == 1) {
        for (int i = 0; i < 3; i++) {
            cin >> imie;
            h.set_imie(imie);
            tab.push_back(h.get_imie());
            // cout << &tab[0] << endl;
        }
        cout << "czy jeszcze 0n 1t" << endl;
        cin >> o;
    }
    cout << tab.size() << endl << tab.capacity();
}
