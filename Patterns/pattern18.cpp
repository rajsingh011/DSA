#include <iostream>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
int i,j;

for (i=0;i<n;i++){
for (char ch='E'-i;ch<='E';ch++){
    cout << ch << " ";
}
    cout << endl;
}
    }
};
int main (){
    int n ;
    n=5;
    Solution obj ;
    obj.pattern18(n);
    return 0;
}