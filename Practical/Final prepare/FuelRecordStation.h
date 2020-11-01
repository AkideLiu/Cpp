// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description :

// write class declaration headers not actual code implementations of the functions.

//

#ifndef CPP_FUELRECORDSTATION_H
#define CPP_FUELRECORDSTATION_H

#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

class FuelRecordStation {

public:
    FuelRecordStation();

    int get_id();

    void set_id(int id);

    vector<int> get_readings();

    void set_readings(vector<int> readings);

    int get_launch_date();

    void set_launch_time(int launch_date);

    string get_pipeline();

    void set_pipeline(string pipeline);

    string get_section();

    void set_section(string section);

    struct get_current{
        string date();
        string time();
        string time_all();
    }get_current;

    void add_reading(vector<int> readings, string current_time);



private:

    /***
     *  id is unique identifier for this station,
     *  readings stored a vector which can contains the last 1000 fuel flow.
     *  launch date as a int stored as format of DD/MM/YYYY example '18102020' -- 18 Oct 2020
     *  pipeline stored as a string represents which pipe this station monitors
     *  section stored as a string represents which rocket section this station is on
     *
     *  the rocket parts need to be separated by given name and identified by unique id
     */

    int id;
    vector<int> readings;
    int launch_date;
    string pipeline;
    string section;
};


#endif //CPP_FUELRECORDSTATION_H
