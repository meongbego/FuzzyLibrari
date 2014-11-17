#ifndef LINEARNAIK_H
#define LINEARNAIK_H

#include "fuzzyset.h"

class LinearNaik : public FuzzySet
{
public:
    explicit LinearNaik();

private:

public:
    double getValue(double v){
        if ((v<=nKiri)){
            return 0;
        }
        else if((nKiri<v) && (v<nKanan)){
            return (v-nKiri)/(nKanan-nKiri);
        }
        else if(v>=nKanan){
            return 1;
        }
    }

signals:

public slots:

};

#endif // LINEARNAIK_H
