#include <iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
int revNum = 0;
while (n>0){
    int ld=n%10;
    revNum = (revNum*10)+ld;
    n=n/10;
}
return revNum;
}
};
int main(){
    int n;
    n=234;
    Solution Obj;
   cout <<  Obj.reverseNumber(n);
    return 0;
}