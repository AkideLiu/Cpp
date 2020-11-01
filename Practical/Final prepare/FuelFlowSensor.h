// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 
// write class declaration headers not actual code implementations of the functions.
//

#ifndef CPP_FUELFLOWSENSOR_H
#define CPP_FUELFLOWSENSOR_H

#include <iostream>

using namespace std;

class FuelFlowSensor {
public:

    FuelFlowSensor();

    FuelFlowSensor(int time, int flow);

    int get_time();

    int get_flow();

    void set_time(int time);

    void set_flow(int flow);

private:
    int time;
    int flow;
};


#endif //CPP_FUELFLOWSENSOR_H
