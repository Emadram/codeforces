#include <iostream>
int main(){
        int n;
        int alwaysBit = 1;
        int count = 0;
        std::string s;
        std::cin >> n;
        while (n--){
                std::cin >> s;
                if(s[alwaysBit] == '+')
                        ++count;
                else
                        --count;
        }
        std::cout << count << "\n";
}
