#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        int i ,j;
        for (i=1;i<=n;i++){
            for (j=1;j<=n-i+1;j++){
                cout << j ;
            }
            cout << endl;
        }

    }
};
int main (){
    int n ;
    cin>>n ;
    Solution obj ;
    obj.pattern6(n);
    return 0;
    
}