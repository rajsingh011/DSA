#include <iostream>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
for (int i=0;i<n;i++){
    char ch = 'A'+ i ;
   for (int j=0;j<=i;j++){
        cout << ch << " ";
    }
    
    cout << endl;
}
}
    };
int main (){
    char n;
    n= 5;
    Solution obj;
    obj.pattern16(n);
    return 0;
}