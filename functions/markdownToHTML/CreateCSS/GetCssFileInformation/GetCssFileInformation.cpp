//
// Created by 刘鹏 on 08/03/2021.
//

#include <fstream>
#include "GetCssFileInformation.h"

GetCssFileInformation::GetCssFileInformation() {
    this->cssCode = std::vector<std::string>();
}

const CSSPath &GetCssFileInformation::getCssPath() const {
    return cssPath;
}

void GetCssFileInformation::setCssPath(const CSSPath &cssPath) {
    GetCssFileInformation::cssPath = cssPath;
}

const std::vector<std::string> &GetCssFileInformation::getCssCode() const {
    return cssCode;
}

void GetCssFileInformation::addCode() {
    //创建一个 fstream 类对象
    std::fstream fs;
    fs.open(this->cssPath.getCssPath(), std::ios::in);
    if (fs) {
        //条件成立，则说明文件打开成功
        std::string buf;
        while (getline(fs,buf))
        {
            this->cssCode.push_back(buf);
        }
        fs.close();
    }
    else {
        //test.txt doesn't exist
        return;
    }
}

GetCssFileInformation::GetCssFileInformation(const CSSPath &cssPath) : cssPath(cssPath) {
    this->cssPath = cssPath;
    this->cssCode = std::vector<std::string>();
    this->addCode();
}
