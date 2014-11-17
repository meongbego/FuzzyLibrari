#ifndef LINEARTURUN_H
#define LINEARTURUN_H

#include "fuzzyset.h"

class LinearTurun : public FuzzySet
{ 
public:
    LinearTurun();

signals:

public slots:
    double getValue(double v){
        if ((v>=nKanan)){
            return 0;
        }
        else if((nKiri<v) && (v<nKanan)){
            return (nKanan-v)/(nKanan-nKiri);
        }
    }
};

#endif // LINEARTURUN_H
