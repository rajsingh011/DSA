
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern2(int n) {
int i,j;
for (i=0;i<n;i++){
    for(j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
    }
};
int main(){
    int n;
    cin >> n ;
    Solution obj;
    
        obj.pattern2(n);
        return 0;
    }