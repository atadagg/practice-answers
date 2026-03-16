#include <iostream>
using namespace std;

int main() {

    long long org_num = 600851475143;
    long long largest = 1;
    long long num = org_num;
    for(long long i = 2; i*i <= num; i++){
        
        if(num % i == 0){
            num = num/i;
            largest = i;
            i--;
        }

    }

    if (num > 1) largest = num;

    cout << largest << endl;
    return 0;
}
