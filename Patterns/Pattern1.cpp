#include <iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
int i,j;
for (i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<"*";
    }
    cout<<endl;
}
    }
};
int main(){
    int n;
    n=3;
    Solution obj;
    
        obj.pattern1(n);
        return 0;
    }
