#include <iostream>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int dub = n;
        while (n>0){
            int ld = n%10;
            sum = sum + ld*ld*ld;
            n=n/10;

        }
        if (sum == dub) return true ;
        else return false ;

         }
};
int main (){
    int n ;
    n=242;
    Solution Obj;
   if (Obj.isArmstrong(n))
    cout << n << " is an Armstrong number";
else
    cout << n << " is not an Armstrong number";
    return 0 ;
}