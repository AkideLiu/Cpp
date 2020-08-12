// Author : Akide Liu 
// Date : 11/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    cout << "Report Card" << " ";
    for (int i = 0; i < 4; ++i) {
        if (i != 3){
            cout << courses[i] << " ";
        }else {
            cout << courses[i];
        }
    }
    cout << endl;

    for (int i = 0; i < nstudents; ++i) {
        cout << students[i] << " ";
        for (int j = 0; j < 4; ++j) {
            if (j != 3){
                cout << report_card[i][j] << " ";
            }else {
                cout << report_card[i][j];
            }
        }
        cout << endl;
    }
}
