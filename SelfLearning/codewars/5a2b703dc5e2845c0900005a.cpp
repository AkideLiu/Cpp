// Author : Akide Liu 
// Date : 2/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description :

// https://www.codewars.com/kata/5a2b703dc5e2845c0900005a/train/cpp

//

bool isDivideBy(int number, int a, int b)
{
    if (number % a == 0 && number % b == 0) {
        return true;
    }else{
        return false;
    }
}