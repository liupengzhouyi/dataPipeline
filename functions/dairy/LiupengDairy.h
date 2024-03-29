//
// Created by 刘鹏 on 2021/1/13.
//

#ifndef DATAPIPELINE_LIUPENGDAIRY_H
#define DATAPIPELINE_LIUPENGDAIRY_H
#include <iostream>
#include <list>
#include "../../models/dairy/LiupengDairyModel.h"
#include "../../models/LiupengFile.h"


class LiupengDairy {

private:
    std::list<LiupengDairyModel> liupengDairyModelList;
    LiupengFile liupengFile;

public:

    std::string readFile();

    const LiupengFile &getLiupengFile() const;

    void setLiupengFile(const LiupengFile &liupengFile);

    void createDairyModel(std::string dairyModelInformation);

    const std::list<LiupengDairyModel> &getLiupengDairyModelList() const;

    void setLiupengDairyModelList(const std::list<LiupengDairyModel> &liupengDairyModelList);

    std::vector<std::string> split(std::string src, char key);

    GetNowTime formatCalender(std::string calenderInformation);

    GetNowTime formatTime(std::string calenderInformation, std::string timeInformation, int key);

    void createMarkdownTableDairy();

};


#endif //DATAPIPELINE_LIUPENGDAIRY_H
