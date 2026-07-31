#include <iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
int revNum = 0;
int dub = n;
while (n>0){
    int ld=n%10;
    revNum = (revNum*10)+ld;
    n=n/10;
}

if (dub == revNum) cout << "true";
else cout << "false";
return revNum;
    }
};
int main(){
    int n;
    n=111;
    Solution Obj;
   Obj.reverseNumber(n);
    return 0;
}