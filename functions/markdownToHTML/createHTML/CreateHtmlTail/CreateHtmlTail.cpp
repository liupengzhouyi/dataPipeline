//
// Created by 刘鹏 on 08/03/2021.
//

#include "CreateHtmlTail.h"

CreateHtmlTail::CreateHtmlTail() {
    this->code = std::vector<std::string>();
}

void CreateHtmlTail::addHtmlCode(std::string code) {
    this->code.push_back(code);
}
