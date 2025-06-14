#include <iostream>
using namespace std;
int main(){
        string val;
        cin >> val;
        char a = val[0];
        if (a >= 'a' && a <= 'z')
                val[0] = a - 32;
        cout << val << endl;
        return 0;
}
