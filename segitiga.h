#ifndef SEGITIGA_H
#define SEGITIGA_H

#include "fuzzyset.h"

class Segitiga : public FuzzySet
{
    Q_OBJECT
public:
    explicit Segitiga(QObject *parent = 0);

private:
    double tengah;
public:
    void setTengahSegitiga(double m)
    {
        tengah =m;
    }

    double getValue(double v)
    {
        if(v<=nKiri)
            return 0;
        else if(v<nKiri)
            return (v-nKiri)/(nKanan-nKiri);
        else if(v==tengah)
            return 1;
        else if(v<nKanan)
            return (nKanan-v)/(nKanan-tengah);
        else
            return 0;
    }


signals:

public slots:

};

#endif // SEGITIGA_H
