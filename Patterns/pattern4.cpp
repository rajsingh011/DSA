#include <iostream>
using namespace std;

class Solution {
public:
    void pattern4(int n) {
        int i,j;
        for (i=1;i<=n;i++){
           for (j=1;j<=i;j++){
            cout << i ;

           } 
           cout << endl;
        }

    }
};
int main (){
    int n ;
    cin>>n ;
    Solution obj ;
    obj.pattern4(n);
    return 0;
    
}