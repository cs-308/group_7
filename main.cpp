#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int n;
    cin>>n;
    while(n<0){
        cin>>n;
    }
    printf("The factorial of n is %d\n",factorial(n));
    return 0;
}
