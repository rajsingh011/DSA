#include <iostream>
using namespace std;

class Solution {
int i,j;
public:
    void pattern22(int n) {
for (i=0;i<2*n-1;i++){
    for (j=0;j<2*n-1;j++){
        int top = i;
        int left = j;
        int right = (2*n-2)-j;
        int down = (2*n -2 )-i;
        cout << (n-min (min(top,down),min(left,right )));
    }
    cout<< endl;
}
    }
};
int main (){
    int n;
    n=5;
    Solution Obj ;
    Obj.pattern22(n);
    return 0;
}