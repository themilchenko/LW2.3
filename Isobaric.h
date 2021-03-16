#include "Thermal.h"

#ifndef LW3_2_ISOBARIC_H
#define LW3_2_ISOBARIC_H

class Isobaric : public Thermal
{
private:
    double pressure;
    double volume1;
    double volume2;

public:
    Isobaric(const double& p, const double& v1, const double& v2) :
    pressure(p),
    volume1(v1),
    volume2(v2)
    { };

    double count_work() const override final;

    void print() const override final;

};

#endif //LW3_2_ISOBARIC_H
