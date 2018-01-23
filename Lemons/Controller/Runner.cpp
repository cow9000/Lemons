//
//  Runner.cpp
//  Lemons
//
//  Created by Vawdrey, Derek on 1/23/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Controller.hpp"

int main(){
    
    Controller app;
    app.start();
    
    Controller * appPointer = new Controller();
    
    //Long way
    (*appPointer).start();
    //Short way
    appPointer->start();
    
    return 0;
}
