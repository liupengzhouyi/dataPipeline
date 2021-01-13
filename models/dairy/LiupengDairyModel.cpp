//
// Created by 刘鹏 on 2021/1/13.
//

#include "LiupengDairyModel.h"

LiupengDairyModel::LiupengDairyModel() {
    this->setGetNowTime(GetNowTime());
}

const GetNowTime &LiupengDairyModel::getGetNowTime() const {
    return getNowTime;
}

void LiupengDairyModel::setGetNowTime(const GetNowTime &getNowTime) {
    LiupengDairyModel::getNowTime = getNowTime;
}

const std::string &LiupengDairyModel::getWhathapped() const {
    return whathapped;
}

void LiupengDairyModel::setWhathapped(const std::string &whathapped) {
    LiupengDairyModel::whathapped = whathapped;
}

const std::string &LiupengDairyModel::getYourthings() const {
    return yourthings;
}

void LiupengDairyModel::setYourthings(const std::string &yourthings) {
    LiupengDairyModel::yourthings = yourthings;
}


