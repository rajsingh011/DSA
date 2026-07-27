#include <iostream>
using namespace std;

 class Solution {
public:
    void pattern8(int n) {
  int i,j;
        for (i=0;i<n;i++){
            for(j=0;j<i;j++){
                cout << " ";
            }
                for (j=0;j<2*n-(2*i+1);j++){
                    cout<<"*";
                }
            for (j=0;j<i;j++){
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
    obj.pattern8(n);
    return 0;
    
}