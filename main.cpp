#include <iostream>
#include <vector>
#include "models/GetNowTime.h"
#include "models/LiupengLogModel.h"
#include "models/LiupengFile.h"
#include "models/dairy/LiupengDairyModel.h"
#include "functions/dairy/LiupengDairy.h"
#include "functions/markdownToHTML/MdToH5Index.h"
#include "functions/sayHello/SayHelloIndex.h"

int main() {

    // MdToH5Index index = MdToH5Index();
    SayHelloIndex index = SayHelloIndex();
    index.index();

    std::cout << "Hello liupeng!, Now you can using Jenkins to build cpp project and test it!" << std::endl;
    return 0;
}
