#include <iostream>
using namespace std;
int main(){
        string val;
        cin >> val;
        if (val[0] >= 'a' && val[0] <= 'z') {
                val[0] = val[0] - 32;
        }
        cout << val << endl;
        return 0;
}
