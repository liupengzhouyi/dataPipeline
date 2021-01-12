//
// Created by 刘鹏 on 2021/1/12.
//

#ifndef DATAPIPELINE_LIUPENGLOGMODEL_H
#define DATAPIPELINE_LIUPENGLOGMODEL_H

#include <iostream>
#include <string>
#include <time.h>
#include "GetNowTime.h"


class LiupengLogModel {

private:
    GetNowTime datetime;
    std::string what;
    std::string how;
    std::string why;

public:
    LiupengLogModel();

    const GetNowTime &getDatetime() const;

    void setDatetime(const GetNowTime &datetime);

    const std::string &getWhat() const;

    void setWhat(const std::string &what);

    const std::string &getHow() const;

    void setHow(const std::string &how);

    const std::string &getWhy() const;

    void setWhy(const std::string &why);

    std::string getLogInformation();

    std::string getMarkdownInformation();

};


#endif //DATAPIPELINE_LIUPENGLOGMODEL_H
