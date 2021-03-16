#include "Thermal.h"

#ifndef LW3_2_ISOCHORIC_H
#define LW3_2_ISOCHORIC_H

class Isochoric : public Thermal
{
private:
    double pressure;
    double volume;

public:
    Isochoric(const double& p, const double& v1) :
    pressure(p),
    volume(v1)
    { };

    double count_work() const override final;

    void print() const override final;
};

#endif //LW3_2_ISOCHORIC_H
