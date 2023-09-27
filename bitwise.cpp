#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "enter two numbers: " << std::endl;
    std::cin >> a >> b;
    
    while (b != 0) {
        int c = a & b;
        a = a ^ b;
        b = c << 1;
        }
        std::cout << a << std::endl;
        

}
