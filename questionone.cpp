#include <iostream>

int main()
{
    double pounds;
    std::cout<<"Hello What is you weight in lbs?"<< std::endl;
    std::cin >> pounds;
    
    std::cout << "Hello you would weigh " << (pounds * .38) << " lbs on mars!" << std::endl;

    return 0;
}
