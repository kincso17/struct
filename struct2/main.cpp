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
    int max, idx;
    int n;
    ifstream input("input.txt");
    input >> n;
    for (int i=0; i<n;i++){
        input >> diakok[i].azonosito;
        input >> diakok[i].nev;
        input >> diakok[i].osztaly;
        input >> diakok[i].media;
        if(i==0){
            max= diakok[i].media;
            max=diakok[i].azonosito;
        }
        if(diakok[i].media > max){
            max=diakok[i].media;
            idx=diakok[i].azonosito;
        }
    }
    cout << idx << endl;
    return 0;
}
