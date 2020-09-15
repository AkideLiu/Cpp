// Author : Akide Liu 
// Date : 15/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Hunter.h"
#include "Animal.h"

Hunter::Hunter(string aSpecies) : Animal(aSpecies) {

}

void Hunter::record_kill(string kill) {
    kills.push_back(kill);
}

int Hunter::numberOfKills() {
    return kills.size();
}

vector<string> Hunter::get_kills() {
    return vector<string>();
}
