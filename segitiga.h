#ifndef SEGITIGA_H
#define SEGITIGA_H

#include "fuzzyset.h"

class Segitiga : public FuzzySet
{
private:
    double dMiddle;

public:
    void setTengah(double l,double r){
        dMiddle=l;
    }

    double getValue(double v)
    {
        if(v<=nKiri)
            return 0;
        else if(v<dMiddle)
            return (v-nKiri)/(dMiddle-nKiri);
        else if(v==dMiddle)
            return 1.0;
        else if(v<nKanan)
            return (nKanan-v)/(nKanan-dMiddle);
        else
            return 0;
    }
};

#endif // SEGITIGA_H
