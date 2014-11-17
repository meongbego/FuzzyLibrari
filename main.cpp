#include <QCoreApplication>
#include <QDebug>
#include <segitiga.h>
#include <trapesium.h>
#include <fuzzyset.h>

const double cdMinimumPrice =0;
const double cdMaximumPrice =70;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    FuzzySet *fuzzy[2];
    fuzzy[0] = new Segitiga;
    //fuzzy[1] = new Trapesium;

    fuzzy[0]->setInterval(0,50);
    fuzzy[0]->setTengah(25,0);
    fuzzy[0]->setNama("pendek");
    fuzzy[0]->setNamaVariabel('p');

    //if(10<cdMinimumPrice) continue;
    //if(10>cdMaximumPrice) continue;

    for(int i=0; i<3; i++)
    {
       if (fuzzy[i]->isDotInInterval(10))
           qDebug()<<"Yes";
       else
           qDebug()<<"No";

       fuzzy[i]->getName();

       qDebug()<<fuzzy[i]->getValue(10);
    }

    return a.exec();
}
