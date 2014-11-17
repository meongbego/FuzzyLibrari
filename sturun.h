#ifndef STURUN_H
#define STURUN_H

#include "fuzzyset.h"

class sTurun : public FuzzySet
{
public:
    explicit sTurun();

private:
    double tengahBeta;

public:
    void setTengah(double l,double r){
        tengahBeta=l;
    }

    double getValue(double v){
        if (v<=nKiri){
            return 1;
        }
        else if ((nKiri<v)&& (v<tengahBeta)){
            return (1-2*pow(((v-nKiri)/(nKanan-nKiri)),2));
        }

        else if ((tengahBeta<v)&&(v<nKanan)){
            return (2*pow(((nKanan-v)/(nKanan-nKiri)),2));
        }
        else if(v>=nKanan){
            return 0;
        }
    }

signals:

public slots:

};

#endif // STURUN_H
