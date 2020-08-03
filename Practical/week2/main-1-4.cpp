// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern void print_scaled_matrix(int array[3][3],int scale);

using namespace std;

int main(){
    int scale = 3 ;
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled_matrix(threebythree,scale) ;


}