//
// Created by 刘鹏 on 2021/1/13.
//

#ifndef DATAPIPELINE_LIUPENGDAIRYMODEL_H
#define DATAPIPELINE_LIUPENGDAIRYMODEL_H
#include <iostream>
#include <string>
#include "../GetNowTime.h"

class LiupengDairyModel {

private:
    GetNowTime getNowTime;
    std::string whathapped;
    std::string yourthings;

public:
    LiupengDairyModel();

    const GetNowTime &getGetNowTime() const;

    void setGetNowTime(const GetNowTime &getNowTime);

    const std::string &getWhathapped() const;

    void setWhathapped(const std::string &whathapped);

    const std::string &getYourthings() const;

    void setYourthings(const std::string &yourthings);
};


#endif //DATAPIPELINE_LIUPENGDAIRYMODEL_H
