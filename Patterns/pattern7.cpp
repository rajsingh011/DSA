#include <iostream>
using namespace std;


class Solution {
public:
    void pattern7(int n) {
        int i,j;
        for (i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                cout << " ";
            }
                for (j=0;j<2*i+1;j++){
                    cout<<"*";
                }
            for (j=0;j<n-i;j++){
                cout<< " ";
            }

cout << endl;

        }


        }


    };

int main (){
    int n ;
    cin>>n ;
    Solution obj ;
    obj.pattern7(n);
    return 0;
    
}