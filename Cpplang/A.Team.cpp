#include <iostream>
int main(){
        int c = 0;
        int n, x,y,z;
        std::cin >> n;
        while(n--){
                std::cin >> x >> y >> z;
                if(x+y+z > 1)
                        ++c;
        }
        std::cout << c << "\n";
        return 0;
}
