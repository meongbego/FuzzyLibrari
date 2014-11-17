#ifndef TRAPESIUM_H
#define TRAPESIUM_H

#include "fuzzyset.h"

class Trapesium : public FuzzySet
{
    Q_OBJECT
public:
    explicit Trapesium(QObject *parent = 0);
private:
    double tengahKiri,tengahKanan;
public:
    void setTengahTrapesium(double l, double r){
        tengahKiri=l;
        tengahKanan=r;
    }

    double getValue(double v){
        if (v<=nKiri){
            return 0;
        }
        else if (v<tengahKiri){
            return (v-tengahKiri)/(tengahKanan-nKiri);
        }
        else if(v<=tengahKanan){
            return 1;
        }
        else if(v<nKanan){
            return (nKanan-v)/(nKanan-tengahKanan);
        }
        else
        {
            return 0;
        }

    }

signals:

public slots:

};

#endif // TRAPESIUM_H
