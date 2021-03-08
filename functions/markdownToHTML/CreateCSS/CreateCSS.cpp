//
// Created by 刘鹏 on 08/03/2021.
//

#include "CreateCSS.h"
#include "CssPath/CSSPath.h"
#include "GetCssFileInformation/GetCssFileInformation.h"

CreateCSS::CreateCSS() {
    this->code = std::vector<std::string>();
}

void CreateCSS::addCode(std::string code) {
    this->code.push_back(code);
}

void CreateCSS::addCSSBegin() {
    this->addCode("<style type=\"text/css\">\n");
}

void CreateCSS::addCSSCode() {

    CSSPath *cssPath = new CSSPath();
    cssPath->setCssPath(this->cssPathString);

    GetCssFileInformation *getCssFileInformation = new GetCssFileInformation();
    getCssFileInformation->setCssPath(*cssPath);
    getCssFileInformation->addCode();

    for (auto code : getCssFileInformation->getCssCode()) {
        this->code.push_back(code);
    }
}

void CreateCSS::addCSSEnd() {
    this->addCode("</style>\n");
}

const std::string &CreateCSS::getCssPathString() const {
    return cssPathString;
}

void CreateCSS::setCssPathString(const std::string &cssPathString) {
    CreateCSS::cssPathString = cssPathString;
}

void CreateCSS::init() {
    this->addCSSBegin();
    this->addCSSCode();
    this->addCSSEnd();
}

const std::vector<std::string> &CreateCSS::getCode() const {
    return code;
}

