#include <iostream>
#include <fstream>
using namespace std;

struct diak{
    string nev;
    string szemszin;
    int magyar;
    int roman;
    int matek;
    int fizika;
    int eletkor;
} diakok[1000];


int main()
{
    int max, fiatal, magyaros;
    int atlag[1000];
    int n;
    ifstream input("input.txt");
    ifstream nev("nev.txt");
    ifstream szemszin("szemszin.txt");
    ifstream magyar("magyar.txt");
    ifstream roman("roman.txt");
    ifstream matek("matek.txt");
    ifstream fizika("fizika.txt");
    ifstream eletkor("eletkor.txt");
    input >> n;
    for (int i=0; i<n;i++){
        nev >> diakok[i].nev;
        szemszin >> diakok[i].szemszin;
        magyar >> diakok[i].magyar;
        roman >> diakok[i].roman;
        matek >> diakok[i].matek;
        fizika >> diakok[i].fizika;
        eletkor >> diakok[i].eletkor;

        atlag[i]=diakok[i].magyar+diakok[i].roman+diakok[i].matek+diakok[i].fizika;
        atlag[i]=atlag[i]/4;
        if(i==0){max=atlag[i];}
        if(atlag[i] > max){
            max=atlag[i];
        }
        if(i==0){fiatal=diakok[i].eletkor;}
        if(diakok[i].eletkor < fiatal){
            fiatal=diakok[i].eletkor;
        }
        if(i==0){magyaros=diakok[i].magyar;}
        if(diakok[i].magyar > magyaros){
            magyaros=diakok[i].magyar;
        }

    }
for (int i=0; i<n; i++){
    if(atlag[i]==max && diakok[i].szemszin=="barna"){
        cout << "a legjobb barna szemu diak ";
        cout << "fizika jegye: " << diakok[i].fizika << ",es neve: " << diakok[i].nev << endl;
    }

    if(fiatal==diakok[i].eletkor){
       cout << "a legfiatalabb diak ";
        cout << "magyar jegye: " << diakok[i].magyar << ",szeme szine: " << diakok[i].szemszin << ",neve: " << diakok[i].nev << endl;
    }
    if(magyaros==diakok[i].magyar){
        cout << "a legjobb magyaros ";
        cout << "eletkora: "<< diakok[i].eletkor <<  ",szeme szine; "<< diakok[i].szemszin << endl;
    }
}
    return 0;
}
