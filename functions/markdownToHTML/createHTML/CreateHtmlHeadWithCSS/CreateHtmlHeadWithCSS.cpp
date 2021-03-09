//
// Created by 刘鹏 on 09/03/2021.
//

#include "CreateHtmlHeadWithCSS.h"
#include "../../CreateCSS/CssPath/CSSPath.h"
#include "../../CreateCSS/GetCssFileInformation/GetCssFileInformation.h"

CreateHtmlHeadWithCSS::CreateHtmlHeadWithCSS() {
    this->code = std::vector<std::string>;

}

void CreateHtmlHeadWithCSS::createCssCode() {
    CSSPath *cssPath = new CSSPath();
    cssPath->setCssPath(this->cssPath);
    GetCssFileInformation getCssFileInformation = GetCssFileInformation(*cssPath);
    for (auto tempCode : getCssFileInformation.getCssCode()) {
        this->code.push_back(tempCode);
    }
}

void CreateHtmlHeadWithCSS::addCode(std::string code) {
    this->code.push_back(code);
}

void CreateHtmlHeadWithCSS::createHtmlHead() {
    this->code = std::vector<std::string>();
    this->addCode("<html>\n");
    this->addCode("<<head>>\n");
    this->addCode("<title>" + this->getTitle() + "</title>\n");
    // add css code
    this->createCssCode();
    this->addCode("</<head>>\n");
    this->addCode("<body>\n");
}

const std::string &CreateHtmlHeadWithCSS::getTitle() const {
    return title;
}

void CreateHtmlHeadWithCSS::setTitle(const std::string &title) {
    CreateHtmlHeadWithCSS::title = title;
}

void CreateHtmlHeadWithCSS::createHtmlTail() {

}
