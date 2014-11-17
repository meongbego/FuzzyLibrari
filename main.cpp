#include <QCoreApplication>
#include <QDebug>
#include <segitiga.h>
#include <trapesium.h>
#include <fuzzyset.h>
#include <iostream>
using namespace std;

const double cdMinimumPrice =0;
const double cdMaximumPrice =100;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    FuzzySet *fuzzy[2];
    fuzzy[0] = new Segitiga;
    fuzzy[1] = new Segitiga;
    //fuzzy[1] = new Trapesium;

    fuzzy[0]->setInterval(0,50);
    fuzzy[0]->setTengah(25,0);
    fuzzy[0]->setNama("pendek");
    fuzzy[0]->setType('p');

    fuzzy[1]->setInterval(40,70);
    fuzzy[1]->setTengah(60,0);
    fuzzy[1]->setNama("tinggi");
    fuzzy[1]->setType('n');
    double dValue;
      cout<<"Masukan Nilai : "; cin>>dValue;
      for(int i=0; i<2; i++)
      {
         cout<<"\n Nilai = "<<dValue<<endl;
         if(fuzzy[i]->isDotInInterval(dValue)){
             cout<<"Nilai Masuk";
         }
         else{
             cout<<"Nilai Tidak Masuk";
         }
         cout<<endl;
         cout<<"Fungsi Yang Digunakan = "<<endl;
         fuzzy[i]->getName();
         cout<<"Masuk Di Himpunan = ";
         cout<<fuzzy[i]->getValue(dValue)<<endl;

      }

    return a.exec();
}
