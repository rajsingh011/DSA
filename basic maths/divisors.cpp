#include <iostream>
using namespace std;

class Solution {
public:
    void divisors(int n) {
for (int i=1;i <=n; i++){
    if (n%i==0){
        cout << i << " ";
    }
}
    }
};
int main(){
    int n;
    n=55;
    Solution Obj;
    Obj.divisors(n);
    return 0 ;
}