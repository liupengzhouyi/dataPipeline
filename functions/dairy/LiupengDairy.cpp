//
// Created by 刘鹏 on 2021/1/13.
//

#include "LiupengDairy.h"

const LiupengDairyModel &LiupengDairy::getLiupengDairyModel() const {
    return liupengDairyModel;
}

void LiupengDairy::setLiupengDairyModel(const LiupengDairyModel &liupengDairyModel) {
    LiupengDairy::liupengDairyModel = liupengDairyModel;
}

const LiupengFile &LiupengDairy::getLiupengFile() const {
    return liupengFile;
}

void LiupengDairy::setLiupengFile(const LiupengFile &liupengFile) {
    LiupengDairy::liupengFile = liupengFile;
}
