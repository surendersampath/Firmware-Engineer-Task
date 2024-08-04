#include <iostream>
#include <string>
#include <utility.h>

using namespace std;

int main() {
    bitops::Utility utility;
    utility.setBit(234);
    cout << utility.getBit(10) << endl;
    utility.clearBit(10);
    cout << utility.getBit(10) << endl;
    cout << utility.getBit(234) << endl;
    
    return 0;
}