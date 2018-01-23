//
//  main.cpp
//  Lemons
//
//  Created by Vawdrey, Derek on 1/23/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    //insert code here...
    std::cout << "Hello, World!" << std::endl;
    
    std::string input;
    
    std::getline(std::cin, input);
    std::cout << "You said: " << input << std::endl;
    
    return 0;
}
