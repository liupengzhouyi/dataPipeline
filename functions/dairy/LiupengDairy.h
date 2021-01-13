//
// Created by 刘鹏 on 2021/1/13.
//

#ifndef DATAPIPELINE_LIUPENGDAIRY_H
#define DATAPIPELINE_LIUPENGDAIRY_H
#include <iostream>
#include "../../models/dairy/LiupengDairyModel.h"
#include "../../models/LiupengFile.h"


class LiupengDairy {

private:
    LiupengDairyModel liupengDairyModel;
    LiupengFile liupengFile;

public:
    const LiupengDairyModel &getLiupengDairyModel() const;

    void setLiupengDairyModel(const LiupengDairyModel &liupengDairyModel);

    const LiupengFile &getLiupengFile() const;

    void setLiupengFile(const LiupengFile &liupengFile);

};


#endif //DATAPIPELINE_LIUPENGDAIRY_H
