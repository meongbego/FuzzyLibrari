#ifndef SNAIK_H
#define SNAIK_H

#include "fuzzyset.h"
#include <math.h>

class sNaik : public FuzzySet
{
    Q_OBJECT
public:
    explicit sNaik(QObject *parent = 0);

private:
    double tengahBeta;
public:
    void setTengahSnaik(double b){
        tengahBeta=b;
    }

    double getValue(double v){
        if (v<=nKiri){
            return 0;
        }
        else if ((nKiri<v)&& (v<tengahBeta)){
            return (2*pow(((v-nKiri)/(nKanan-nKiri)),2));
        }
        else if ((tengahBeta<v)&&(v<nKanan)){
            return (1-2*pow(((nKanan-v)/(nKanan-nKiri)),2));
        }
        else if(v>=nKanan){
            return 1;
        }
    }

signals:

public slots:

};

#endif // SNAIK_H
