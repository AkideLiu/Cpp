// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

using namespace std;

int main(){
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed_matrices(matrix1,matrix2) ;


}