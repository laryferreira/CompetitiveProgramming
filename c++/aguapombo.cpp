#include <iostream>
#include <string>

int main() {
    int p, b;
    std::string u1, u2;
    int x, y;
    double proporcaop, proporcaob, total;

    std::cin >> p;
    std::cin >> u1;
    
    if (u1 == "mL") {
        x = 1;
    }
    else if (u1 == "L") {
        x = 1000;
    }
    
    proporcaop = p * x;
    
    std::cin >> b;
    std::cin >> u2;
    
    if (u2 == "mL") {
        y = 1;
    }
    else if (u2 == "L") {
        y = 1000;
    }
    
    proporcaob = b * y;
    
    total = proporcaop / proporcaob;
    
    std::cout << total << std::endl;
    
    return 0;
}
