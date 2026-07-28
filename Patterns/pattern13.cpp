#include <iostream>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
int num = 1;
int i,j;
for (i=1;i<=n;i++){
    for (j=1;j<=i;j++){
        cout << num << " ";
        num = num +1;
    }
    cout << endl;
}
    }
};
int main (){
    int n;
    cin>>n;
    Solution obj;
    obj.pattern13(n);
    return 0;
}