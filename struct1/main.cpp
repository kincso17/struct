#include <iostream>

using namespace std;

struct diak{
int azonosito;
string nev;
string osztaly;
double media;
} a,b,c;


int main()
{
    cout << "a.nev=";
    cin >> a.nev;
    cout << "b.media=";
    cin >> a.media;
    cout << "b.nev=";
    cin >> b.nev;
    cout << "b.media=";
    cin >> b.media;
    cout << "c.nev=";
    cin >> c.nev;
    cout << "c.media=";
    cin >> c.media;
    if (a.media > b.media && a.media>c.media){
        cout << a.nev;
    }else if(b.media >c.media){
            cout << b.nev;
            }else{
            cout << c.nev;
            }
    return 0;
}
