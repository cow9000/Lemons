//
//  Controller.cpp
//  Lemons
//
//  Created by Vawdrey, Derek on 1/23/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Controller.hpp"

#include <iostream>

Controller::Controller(){
    std::cout << "Look I am a constructor" << std::endl;
}

void Controller::start(){
    std::cout << "I am in the start method." << std::endl;
}
