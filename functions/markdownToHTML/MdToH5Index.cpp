//
// Created by 刘鹏 on 08/03/2021.
//

#include "MdToH5Index.h"
#include "getMarkDownPath/GetMarkDownPath.h"
#include "getMarkDownFile/GetMarkDownFile.h"

void MdToH5Index::index() {

    std::string path = "/Users/liupeng/CLionProjects/dataPipeline/files/liupeng.txt";
    GetMarkDownPath *getMarkDownPath = new GetMarkDownPath();
    getMarkDownPath->setMarkDownPath(path);
    std::cout << getMarkDownPath->getMarkDownPath() << std::endl;

    GetMarkDownFile *getMarkDownFile = new GetMarkDownFile();
    getMarkDownFile->setGetMarkDownPath(*getMarkDownPath);

    for (auto s : getMarkDownFile->getMarkdownInformation()) {
        std::cout << s << std::endl;
    }

}