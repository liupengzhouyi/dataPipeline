//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_GETMARKDOWNFILE_H
#define DATAPIPELINE_GETMARKDOWNFILE_H


#include <fstream>
#include <vector>
#include <string>
#include "../getMarkDownPath/GetMarkDownPath.h"

class GetMarkDownFile {

private:
    GetMarkDownPath getMarkDownPath;

    bool fileIsExit;

    std::ifstream markdownFile;

    std::vector<std::string> markdownInformation;


public:

    GetMarkDownFile();

    const GetMarkDownPath &getGetMarkDownPath() const;

    void setGetMarkDownPath(GetMarkDownPath &getMarkDownPath);

    void getMarkdownFile();

    void setFileIsExit();

    void setFileIsNotExit();

    bool isFileIsExit();

    const std::vector<std::string> &getMarkdownInformation() const;

};


#endif //DATAPIPELINE_GETMARKDOWNFILE_H
