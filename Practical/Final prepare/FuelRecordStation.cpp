// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "FuelRecordStation.h"
#include <iostream>
#include <ctime>

using namespace std;


FuelRecordStation::FuelRecordStation() {}

int FuelRecordStation::get_id() {
    return this->id;
}

void FuelRecordStation::set_id(int id) {
    this->id = id;
}

vector<int> FuelRecordStation::get_readings() {
    return this->readings;
}

void FuelRecordStation::set_readings(vector<int> readings) {

    for (int reading : readings) {
        this->readings.push_back(reading);
    }
}

int FuelRecordStation::get_launch_date() {
    return this->launch_date;
}

void FuelRecordStation::set_launch_time(int launch_date) {
    this->launch_date = launch_date;
}

string FuelRecordStation::get_pipeline() {
    return this->pipeline;
}

void FuelRecordStation::set_pipeline(string pipeline) {
    this->pipeline = pipeline;
}

string FuelRecordStation::get_section() {
    return this->section;
}

void FuelRecordStation::set_section(string section) {
    this->section = section;
}

void FuelRecordStation::add_reading(vector<int> readings, string current_time) {

    set_readings(readings);

    // ... need more code implementation ,
    // e.g may use map to create relationship between reading and reading time (current time) accordingly
    // may need to push out the first element to make sure the size of this vector keep in 1000;
    // e.g map<deque<int> readings, string time_stamp>

}


// https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm

// format : DD/MM/YYYY example '18102020' -- 18 Oct 2020

string FuelRecordStation::get_current::date() {

    time_t now = ::time(0);

    tm *itm = localtime(&now);

    string temp = to_string(itm->tm_mday) + to_string(itm->tm_mon) + to_string(itm->tm_year);

    delete itm;

    return temp;

}

// format : HH/min/SS example '231025' -- 23:10:15

string FuelRecordStation::get_current::time() {

    time_t now = ::time(0);

    tm *itm = localtime(&now);

    string temp = to_string(itm->tm_hour) + to_string(itm->tm_min) + to_string(itm->tm_sec);

    delete itm;

    return temp;

}


// format : DD/MM/YYYY/HH/min/SS example '18102020231025' -- 18 Oct 2020 23:10:15


string FuelRecordStation::get_current::time_all() {

    return FuelRecordStation::get_current::date() + FuelRecordStation::get_current::time();

}
