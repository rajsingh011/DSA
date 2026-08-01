#include <iostream>
using namespace std;

class Solution {
public:
int i;
int  cnt=0;
    bool isPrime(int n) {
        for (i=1;i*i<=n;i++){
            if (n%i == 0){
                cnt++;
                if ( (n%i) != i) cnt ++;
        }
        }
        if (cnt == 2) return true;
        else return false ;
    }

};
int main(){
    int n;
    n=12;
    Solution Obj;
    if (Obj.isPrime(n))
    cout << "true  ";
    else cout << "false ";
    return 0 ;
}