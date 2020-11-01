// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description :
// write class declaration headers not actual code implementations of the functions.

//

#ifndef CPP_ROCKET_H
#define CPP_ROCKET_H

#include <vector>
#include <iostream>

using namespace std;

class Rocket {
public:
    Rocket();

    const vector<int> &getFlowMeters() const;

    void setFlowMeters(const vector<int> &flowMeters);

    const string &getName() const;

    void setName(const string &name);

    string report(vector<int> flowMeters,string time_stamp);

private:
    vector<int> flowMeters;
    string name;
};


#endif //CPP_ROCKET_H
