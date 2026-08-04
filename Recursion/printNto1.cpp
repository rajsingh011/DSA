#include <iostream>
using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
       if (n==0){
        return ;
       }
    cout << n << endl;
    printNumbers(n-1);
      
    }
};
int main (){
    int n;
    n=5;
    Solution Obj;
    Obj.printNumbers(n);

}