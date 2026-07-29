#include <iostream>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
for (int i=0;i<n;i++){
    for (char ch = 'A'; ch <='A'+(n-i-1);ch++){
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
    obj.pattern14(n);
    return 0;
}