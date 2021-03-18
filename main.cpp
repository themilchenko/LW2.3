#include "Thermal.h"
#include "Isobaric.h"
#include "Isochoric.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector<Thermal*> thermal_process;

    thermal_process.push_back(new Isobaric(123.1, 25, 10));
    thermal_process.push_back(new Isobaric(13.023, 100, 75));
    thermal_process.push_back(new Isobaric(7, 2342.324, 326.98));

    thermal_process.push_back(new Isochoric(20, 30));
    thermal_process.push_back(new Isochoric(60 ,40));

    for (Thermal* i : thermal_process)
    {
        i->print();
        std::cout << "A = " << i->count_work() << std::endl;
        std::cout << std::endl;
    }
    
    thermal_process.clear();

    return 0;
}
