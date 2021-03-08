#include <iostream>
#include <vector>
#include "models/GetNowTime.h"
#include "models/LiupengLogModel.h"
#include "models/LiupengFile.h"
#include "models/dairy/LiupengDairyModel.h"
#include "functions/dairy/LiupengDairy.h"
#include "functions/markdownToHTML/MdToH5Index.h"

int main() {

    MdToH5Index mdToH5Index = MdToH5Index();
    mdToH5Index.index();
    return 0;
}
