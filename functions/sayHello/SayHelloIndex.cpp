//
// Created by liupeng on 2021/4/28.
//

#include <iostream>
#include "SayHelloIndex.h"
#include "SayHello/SayHello.h"

void SayHelloIndex::index() {

    SayHello sayHello = SayHello();

    std::cout << sayHello.sayHello() << std::endl;

}
