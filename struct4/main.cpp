#include <iostream>
#include <fstream>
using namespace std;

struct diak{
int azonosito;
string nev;
string osztaly;
double media;
} diakok[1000];


int main()
{
    int  idx=0;
    int n;
    int nr=0
    ifstream input("input.txt");
    input >> n;
    for (int i=0; i<n;i++){
        input >> diakok[i].azonosito;
        input >> diakok[i].nev;
        input >> diakok[i].osztaly;
        input >> diakok[i].media;
    }
    for (int i=0; i<n; i++){
        if(diakok[i].osztaly == diakok[i++].osztaly){
            idx = idx + diakok[i];
            nr++;
        }
    }
    cout << idx << endl;
    return 0;
}
