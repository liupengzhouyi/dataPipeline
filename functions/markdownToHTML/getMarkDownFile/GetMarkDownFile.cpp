//
// Created by 刘鹏 on 08/03/2021.
//

#include "GetMarkDownFile.h"

void GetMarkDownFile::getMarkdownFile() {
    //创建一个 fstream 类对象
    std::fstream fs;
    //将 test.txt 文件和 fs 文件流关联
    if (this->getMarkDownPath.isNoPath()) {
        // No file path
        return;
    } else {
        fs.open(this->getMarkDownPath.getMarkDownPath(), std::ios::in);
        if (fs) {
            //条件成立，则说明文件打开成功
            std::string buf;
            while (getline(fs,buf))
            {
                std::cout << buf << std::endl;
                this->markdownInformation.push_back(buf);
            }
            fs.close();
        }
        else {
            //test.txt doesn't exist
            return;
        }
    }
}

void GetMarkDownFile::setFileIsExit() {
    GetMarkDownFile::fileIsExit = true;
}

void GetMarkDownFile::setFileIsNotExit() {
    this->fileIsExit = false;
}

bool GetMarkDownFile::isFileIsExit() {
    std::fstream fs;
    fs.open(this->getMarkDownPath.getMarkDownPath(), std::ios::in);
    if (fs) {
        //条件成立，则说明文件打开成功
        this->setFileIsNotExit();
        fs.close();
    }
    else {
        this->setFileIsExit();
        //test.txt doesn't exist
    }
    return fileIsExit;
}

GetMarkDownFile::GetMarkDownFile() {
    this->markdownInformation = std::vector<std::string>();
    this->fileIsExit = true;
}

const GetMarkDownPath &GetMarkDownFile::getGetMarkDownPath() const {
    return getMarkDownPath;
}

void GetMarkDownFile::setGetMarkDownPath(GetMarkDownPath &getMarkDownPath) {
    GetMarkDownFile::getMarkDownPath = getMarkDownPath;
}

const std::vector<std::string> &GetMarkDownFile::getMarkdownInformation() const {
    return markdownInformation;
}





