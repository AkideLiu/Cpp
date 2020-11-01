// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "FuelFlowSensor.h"

FuelFlowSensor::FuelFlowSensor() {}

FuelFlowSensor::FuelFlowSensor(int time, int flow) : time(time), flow(flow) {}

int FuelFlowSensor::get_time() {
    return this->time;
}

int FuelFlowSensor::get_flow() {
    return this->flow;
}

void FuelFlowSensor::set_time(int time) {
    this->time = time;
}

void FuelFlowSensor::set_flow(int flow) {
    this->flow = flow;
}
