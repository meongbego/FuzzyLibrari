#ifndef FUZZYSET_H
#define FUZZYSET_H

#include <QObject>
#include <QDebug>

class FuzzySet : public QObject
{
    Q_OBJECT
public:
    explicit FuzzySet(QObject *parent = 0);

protected:
    double nKiri;
    double nKanan;
    char dNama;
    char *sNama=NULL;

private:

public:
    virtual void setInterval(double l, double r){
        nKiri = l;
        nKanan = r;
    }

    virtual void setTengahSegitiga(double m)=0;
    virtual void setTengahTrapesium(double l,double r)=0;
    virtual void setTengahSturun(double b)=0;
    virtual void setTengahSnaik(double b)=0;
    virtual void setTengahLonceng(double l)=0;
    virtual void setTengahPi(double b)=0;
    virtual void setTengahGauss(double y)=0;

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
