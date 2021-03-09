//
// Created by 刘鹏 on 09/03/2021.
//

#include <iostream>
#include "ToHtmlH.h"

const std::string &ToHtmlH::getMarkdownCode() const {
    return markdownCode;
}

void ToHtmlH::setMarkdownCode(const std::string &markdownCode) {
    ToHtmlH::markdownCode = markdownCode;
}

const std::string &ToHtmlH::getHtmlCode() const {
    return htmlCode;
}

void ToHtmlH::setHtmlCode(const std::string &htmlCode) {
    ToHtmlH::htmlCode = htmlCode;
}

void ToHtmlH::translation() {
    auto count = 0;
    for (auto ch : this->getMarkdownCode()) {
        if (ch == '#') {
            count = count + 1;
        } else {
            break;
        }
    }
    std::string newTitle = this->getMarkdownCode().substr(count, this->getMarkdownCode().length());
    this->setHtmlCode("<h" + std::to_string(count) + ">" + this->eraseRight(this->eraseLeft(newTitle)) + "</h" + std::to_string(count) + ">\n");
}

std::string ToHtmlH::eraseLeft(std::string str) {
    auto index = str.find_first_not_of(' ');
    return str.substr(index, str.length());
}

std::string ToHtmlH::eraseRight(std::string str) {
    std::string tempStr = str;
    reverse(tempStr.begin(),tempStr.end());
    auto index = tempStr.find_first_not_of(' ');
    return str.substr(0, str.length() - index);
}
