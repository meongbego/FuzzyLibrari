#ifndef FUZZYSET_H
#define FUZZYSET_H

#include <QDebug>
#include <math.h>

class FuzzySet
{
protected:
    double nKiri;
    double nKanan;
    char dNama;
    char *sNama;

public:
    FuzzySet(){};
    virtual ~FuzzySet()
    {
        delete [] sNama;
        sNama=NULL;
    }

private:

public:
    virtual void setInterval(double l, double r){
        nKiri = l;
        nKanan = r;
    }

    virtual void setTengah(double l=0,double r=0)=0;

    virtual void setNamaVariabel(char v){
        dNama =v;
    }

    virtual void setNama(const char* s){
        sNama = new char[strlen(s)+1];
        strcpy(sNama,s);
    }

    bool isDotInInterval(double t)
    {
    if((t>=nKiri)&&(t<=nKanan))
        return true;
    else
        return false;
    }

    char getType(void)const
    {
            return dNama;
    }

    void getName() const
    {
        qDebug()<<sNama<<endl;
    }

    virtual double getValue(double v)=0;

signals:

public slots:

};



#endif // FUZZYSET_H
