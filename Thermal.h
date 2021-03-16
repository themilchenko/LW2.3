#ifndef LW3_2_THERMAL_H
#define LW3_2_THERMAL_H

class Thermal
{
public:
    virtual double count_work() const = 0;
    virtual void print() const = 0;
};

#endif //LW3_2_THERMAL_H
